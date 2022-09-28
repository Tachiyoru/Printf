/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:49:14 by sleon             #+#    #+#             */
/*   Updated: 2022/05/25 19:17:21 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_x(unsigned int nbr, char *base)
{
	int	i;

	i = 0;
	if (16 != 0)
	{
		if (nbr > 16 - 1)
			i += ft_putnbr_x(nbr / 16, base);
		i++;
		ft_putchar_fd(base[nbr % 16], 1);
	}
	return (i);
}

int	ft_printx(unsigned int number)
{
	return (ft_putnbr_x(number, "0123456789abcdef"));
}

int	ft_print_x(unsigned int number)
{
	return (ft_putnbr_x(number, "0123456789ABCDEF"));
}
