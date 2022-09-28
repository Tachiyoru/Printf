/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:26:35 by sleon             #+#    #+#             */
/*   Updated: 2022/05/04 19:34:22 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper( int character )
{
	if (character >= 'a' && character <= 'z')
	{
		character -= 32;
		return (character);
	}
	else
		return (character);
}
