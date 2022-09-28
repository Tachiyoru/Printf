/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 10:31:08 by sleon             #+#    #+#             */
/*   Updated: 2022/05/20 16:43:26 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	size_t			i;
	size_t			j;

	i = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof (char) * i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		str[i++] = s2[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
