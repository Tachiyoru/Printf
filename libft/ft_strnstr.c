/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:15:57 by sleon             #+#    #+#             */
/*   Updated: 2022/05/20 14:57:05 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		y = 0;
		while (big[i + y] == little[y] && i + y < len)
		{
			if (little[y + 1] == '\0')
				return ((char *)big + i);
			y++;
		}
		i++;
	}
	return (NULL);
}
