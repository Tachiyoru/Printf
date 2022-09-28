/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 19:03:23 by sleon             #+#    #+#             */
/*   Updated: 2022/05/21 17:25:17 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			len_dest;
	size_t			len_src;

	i = -1;
	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if ((size < len_dest +1))
		return (len_src + size);
	if (size >= len_dest + 1)
	{
		while (src[++i] && len_dest + i + 1 < size)
			dest[len_dest + i] = src[i];
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
