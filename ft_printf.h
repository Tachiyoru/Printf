/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 15:25:10 by sleon             #+#    #+#             */
/*   Updated: 2022/06/27 13:09:23 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_printnbr(int n);
int		ft_putnbr_x(unsigned int nbr, char *base);
int		ft_printx(unsigned int number);
int		ft_print_x(unsigned int number);
int		ft_numlen(unsigned	int num);
char	*ft_uiitoa(unsigned int n);
int		ft_printui(unsigned int n);
int		ft_ptrlen(unsigned long ptr);
void	ft_ptr(unsigned long ptr);
int		ft_printptr(unsigned long ptr);
int		ft_traitement(const char str, va_list args);
int		ft_printf(const char *str, ...);

#endif
