/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:06:51 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 18:50:28 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*char_str;

	i = 0;
	char_str = (char *)str;
	while (i < n)
	{
		char_str[i] = c;
		i++;
	}
	return (str);
}
