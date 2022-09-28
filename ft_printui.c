/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printui.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:19:43 by sleon             #+#    #+#             */
/*   Updated: 2022/05/25 18:58:14 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(unsigned	int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 10;
	}
	return (len);
}

char	*ft_uiitoa(unsigned int n)
{
	char	*num;
	int		len;

	len = ft_numlen(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (0);
	num[len] = '\0';
	while (n != 0)
	{
		num[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	return (num);
}

int	ft_printui(unsigned int n)
{
	int		length;
	char	*num;

	length = 0;
	if (n == 0)
	{
		length ++;
		write(1, "0", 1);
	}
	else
	{
		num = ft_uiitoa(n);
		length += ft_putstr(num);
		free(num);
	}
	return (length);
}
