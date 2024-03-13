/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:21:11 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 20:59:37 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	if (*s == '\0')
		return (0);
	if (c == 0)
		return (1);
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

int	ft_getwordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

void	free_strings(char **strings, int i)
{
	while (i > 0)
	{
		i--;
		free(*(strings + i));
	}
	free(strings);
}

char	**ft_createsplitstr(char **strings, char const *s, char c,
		size_t strcount)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < strcount)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(strings + i) = ft_substr(s, j, ft_getwordlen((s + j), c));
		if (!*(strings + i))
		{
			free_strings(strings, i);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(strings + i) = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	size_t	strcount;
	char	**strings;

	if (!s)
		return (0);
	strcount = ft_count(s, c);
	strings = (char **)malloc((strcount + 1) * sizeof(char *));
	if (!strings)
		return (0);
	strings = (ft_createsplitstr(strings, s, c, strcount));
	return (strings);
}
