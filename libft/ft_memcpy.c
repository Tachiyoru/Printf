/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 14:50:35 by sleon             #+#    #+#             */
/*   Updated: 2022/05/09 18:24:09 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *dest, const void *src, size_t size )
{
	unsigned char	*dest1;
	unsigned char	*src1;

	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	while (size-- > 0)
		dest1[size] = src1[size];
	return (dest);
}
