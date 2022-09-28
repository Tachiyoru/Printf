/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:27:49 by sleon             #+#    #+#             */
/*   Updated: 2022/05/16 16:59:10 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*src1;
	char	*dest1;
	size_t	l;

	l = 0;
	src1 = (char *)src;
	dest1 = (char *)dest;
	if (dest1 > src1)
	{
		while (size > 0)
		{
			dest1[size - 1] = src1[size - 1];
			size--;
		}
	}
	else
	{
		while (l < size)
		{
			dest1[l] = src1[l];
			l++;
		}
	}
	return (dest);
}
