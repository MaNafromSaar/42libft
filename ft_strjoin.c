/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:16:45 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/07 11:49:23 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	size_t	i;
	size_t	j;
	char	*dest;

	j = 0;
	i = 0;
	total = (ft_strlen(s1) + ft_strlen(s2) + 1);
	dest = (char *)malloc(total);
	if (dest == 0 || s1 == 0 || s2 == 0)
		return (0);
	while (*s1)
	{
		dest[i] = s1[i];
		i++;
	}
	i = ft_strlen(s1);
	while (*s2)
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
