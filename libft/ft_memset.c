/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 12:55:41 by sleon             #+#    #+#             */
/*   Updated: 2022/05/21 16:51:29 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int i, size_t count)
{
	size_t			s;
	unsigned char	*ptr;

	s = 0;
	ptr = (unsigned char *)a;
	while (s < count)
		ptr[s++] = (unsigned char)i;
	return (a);
}
