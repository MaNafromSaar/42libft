/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:48 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/11 12:32:31 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;
	char	*char_str;

	if (count * size > SIZE_MAX)
		return (0);
	ptr = malloc(count * size);
	if (!ptr)
		return (0);
	i = 0;
	char_str = ptr;
	while (i < count * size)
	{
		char_str[i] = 0;
		i++;
	}
	return (ptr);
}
