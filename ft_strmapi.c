/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:00:51 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 15:28:20 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	char			*tmp;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (0);
	result = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!result)
		return (0);
	tmp = result;
	while (*s)
	{
		*tmp = f(i, *s);
		i++;
		s++;
		tmp++;
	}
	*tmp = (0);
	return (result);
}
