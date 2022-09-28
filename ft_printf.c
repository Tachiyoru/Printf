/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 14:48:24 by sleon             #+#    #+#             */
/*   Updated: 2022/07/07 19:17:19 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_traitement(const char str, ...)
{
	int	length;

	length = 0;
	if (str == 'c')
		length += ft_putchar(va_arg(args, int));
	else if (str == 's')
		length += ft_putstr(va_arg(args, char *));
	else if (str == 'p')
		length += ft_printptr(va_arg(args, unsigned long));
	else if ((str == 'd') || (str == 'i'))
		length += ft_printnbr(va_arg(args, int));
	else if (str == 'u')
		length += ft_printui(va_arg(args, unsigned int));
	else if (str == 'x')
		length += ft_printx(va_arg(args, unsigned int));
	else if (str == 'X')
		length += ft_print_x(va_arg(args, unsigned int));
	else if (str == '%')
		length += ft_putchar('%');
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		length;
	int		i;

	length = 0;
	i = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length += ft_traitement(str[i], args);
		}
		else
		{
			length++;
			ft_putchar_fd(str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (length);
}
