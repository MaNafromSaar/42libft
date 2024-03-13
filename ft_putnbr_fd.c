/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:53:51 by mnaumann          #+#    #+#             */
/*   Updated: 2024/03/12 17:21:19 by mnaumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_recursive(int nb, int fd)
{
	char	digit;

	if (nb / 10 != 0)
	{
		ft_putnbr_recursive(nb / 10, fd);
	}
	digit = (nb % 10) + '0';
	write(fd, &digit, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			write(fd, "2147483648", 10);
			return ;
		}
		n = -n;
	}
	else if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	return (ft_putnbr_recursive(n, fd));
}
