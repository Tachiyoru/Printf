/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:37:24 by sleon             #+#    #+#             */
/*   Updated: 2022/05/20 15:18:19 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower( int character )
{
	if (character >= 65 && character <= 90)
	{
		character += 32;
		return (character);
	}
	else
		return (character);
}
