/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:44:48 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 10:35:47 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_signing(int *n)
{
	int	sign;

	sign = 0;
	if (*n == INT_MIN)
		sign = 0;
	if (*n < 0)
	{
		sign = 1;
		*n = *n * -1;
	}
	return (sign);
}

int	ft_intlen(int n)
{
	int	i;
	int	len;

	len = 0;
	i = n;
	if (n == 0)
		return (1);
	while (i != 0)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

char	*ft_intmin(int n)
{
	char	*number;

	n = INT_MIN;
	number = malloc(12);
	if (!number)
		return (0);
	ft_strlcpy(number, "-2147483648", 12);
	return (number);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		len;
	int		sign;

	sign = ft_signing(&n);
	if (n == INT_MIN)
		return (ft_intmin(n));
	len = ft_intlen(n);
	number = malloc(len + sign + 1);
	if (!number)
		return (0);
	number[len + sign] = '\0';
	if (n == 0)
		number[0] = '0';
	while (n != 0)
	{
		number[--len + sign] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == 1)
		number[0] = '-';
	return (number);
}
