/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:26:39 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 19:26:38 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*end;

	end = s + (ft_strlen(s));
	if (c == 0)
		return ((char *)end);
	while (*end != (char)c && end > s)
	{
		end--;
	}
	if (*end == (char)c)
		return ((char *)end);
	else
		return (0);
}
