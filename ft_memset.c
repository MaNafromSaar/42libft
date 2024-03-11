/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:06:51 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/08 09:26:00 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*char_str;

	if (c >= 0 && c <= 255)
	{
		i = 0;
		char_str = (char *)str;
		while (i < n)
		{
			char_str[i] = c;
			i++;
		}
	}
	return (str);
}
