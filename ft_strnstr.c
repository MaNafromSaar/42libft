/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:56:41 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/11 13:14:06 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	if (*needle == '\0')
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (*haystack && len >= len_needle)
	{
		if (ft_strncmp(haystack, needle, len_needle) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
