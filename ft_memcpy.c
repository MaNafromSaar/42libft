/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:39:50 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 19:52:25 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*char_dst;
	const char	*char_src = (const char *)src;
	size_t		i;

	char_dst = (char *)dest;
	i = 0;
	if (!dest || !src || !n)
		return (dest);
	while (i < n)
	{
		char_dst[i] = char_src[i];
		i++;
	}
	return (dest);
}
