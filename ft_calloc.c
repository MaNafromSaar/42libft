/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:48 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/08 09:09:57 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	char	*char_str;

	ptr = malloc(count * size);
	i = 0;
	char_str = ptr;
	if (ptr == 0 || !(malloc(count * size)) || !count || !size)
		return (0);
	while (i < count * size)
	{
		char_str[i] = 0;
		i++;
	}
	return (ptr);
}
