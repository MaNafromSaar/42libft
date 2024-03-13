/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:39:40 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 19:09:27 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;

	cc = c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (*str == cc)
			return ((void *)str);
		else
		{
			str++;
			n--;
		}
	}
	return (0);
}
