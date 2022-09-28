/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:49:37 by sleon             #+#    #+#             */
/*   Updated: 2022/05/16 16:54:10 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == (-2147483648))
		write (fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar_fd('-', fd);
		}
		if (n >= 10)
			ft_putnbr_fd (n / 10, fd);
		ft_putchar_fd (n % 10 + '0', fd);
	}
}
