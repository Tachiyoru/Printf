/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:22:35 by sleon             #+#    #+#             */
/*   Updated: 2022/05/25 20:03:43 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr("(null)"));
	while (str[i])
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}

int	ft_printnbr(int n)
{
	int		i;
	char	*number;

	i = 0;
	number = ft_itoa(n);
	i = ft_putstr(number);
	free(number);
	return (i);
}
