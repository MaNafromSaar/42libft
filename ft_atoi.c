/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:33:37 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 19:38:56 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == 32 || (8 < *str && *str < 14))
		str++;
	if ((*str == '+' || *str == '-') && ft_isdigit(*(str + 1)))
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str)
	{
		if (ft_isdigit(*str))
		{
			result = result * 10 + (*str - 48);
			str++;
		}
		else if (!(ft_isdigit(*str)))
			break ;
	}
	return (result * sign);
}
