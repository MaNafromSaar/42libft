/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:16:45 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/11 15:29:21 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*dest;

	total = (ft_strlen(s1) + ft_strlen(s2) + 1);
	dest = (char *)malloc(total);
	if (!dest)
		return (0);
	ft_strlcpy(dest, s1, total);
	ft_strlcat(dest, s2, total);
	return (dest);
}
