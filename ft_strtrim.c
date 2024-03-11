/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:22:55 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/07 16:51:25 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	while (*s1 && ft_strchr(set, s1[i]))
		i++;
	while (*s1 && ft_strchr(set, s1[j]))
		j--;
	trimmed = ft_substr(s1, i, (j - i + 1));
	return (trimmed);
}
