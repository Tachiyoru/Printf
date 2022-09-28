/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:36:21 by sleon             #+#    #+#             */
/*   Updated: 2022/05/25 19:46:55 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptrlen(unsigned long ptr)
{
	int	length;

	length = 0;
	while (ptr != 0)
	{
		length++;
		ptr = ptr / 16;
	}
	return (length);
}

void	ft_ptr(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_ptr(ptr / 16);
		ft_ptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar_fd((ptr + '0'), 1);
		else
			ft_putchar_fd((ptr - 10 + 'a'), 1);
	}
}

int	ft_printptr(unsigned long ptr)
{
	int	length;

	if (ptr == 0)
	{
		length = 5;
		write(1, "(nil)", 5);
		return (length);
	}
	length = 2;
	write(1, "0x", 2);
	ft_ptr(ptr);
	length += ft_ptrlen(ptr);
	return (length);
}
