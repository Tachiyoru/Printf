/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:15:26 by sleon             #+#    #+#             */
/*   Updated: 2022/05/21 16:49:42 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*mem;

	mem = malloc(size * nmemb);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, nmemb * size);
	return (mem);
}
