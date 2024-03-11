/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:30:07 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/06 18:00:24 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*char_str;

	char_str = (char *)str;
	i = 0;
	while (i < n)
	{
		char_str[i] = 0;
		i++;
	}
	return (str);
}
