/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:00:23 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/06 20:53:35 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*char_dst;
	const char	*char_src = (const char *)src;
	size_t		i;

	char_dst = (char *)dest;
	i = 0;
	if (char_dst < char_src)
	{
		while (i < len)
		{
			char_dst[i] = char_src[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i > 0)
		{
			char_dst[i - 1] = char_src[i - 1];
			i--;
		}
	}
	return (dest);
}
