/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:51:10 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 14:55:38 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_createsubstr(size_t n)
{
	char	*substr;

	substr = (char *)malloc((n + 1) * sizeof(char));
	if (!substr)
		return (0);
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	dest = ft_createsubstr(len);
	if (!dest)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
