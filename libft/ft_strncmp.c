/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:39:10 by sleon             #+#    #+#             */
/*   Updated: 2022/05/20 15:09:45 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t l)
{
	size_t	i;

	i = 0;
	while ((a[i] || b[i]) && i < l)
	{
		if (a[i] != b[i])
			return (((unsigned char *)a)[i] - ((unsigned char *)b)[i]);
		i++;
	}
	return (0);
}
