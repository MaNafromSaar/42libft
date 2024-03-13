/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:00:23 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 20:48:59 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*byte_dst;
	const char	*byte_src;

	if (!dest && !src)
		return (0);
	byte_dst = (char *)dest;
	byte_src = (const char *)src;
	if (byte_dst < byte_src)
	{
		while (len--)
			*byte_dst++ = *byte_src++;
	}
	else
	{
		byte_dst += len;
		byte_src += len;
		while (len--)
			*--byte_dst = *--byte_src;
	}
	return (dest);
}
