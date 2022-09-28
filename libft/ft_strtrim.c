/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 11:17:49 by sleon             #+#    #+#             */
/*   Updated: 2022/05/20 17:07:26 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_debut(const char*s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	ft_fin(const char*s1, char const *set)
{
	int	len;
	int	j;

	len = ft_strlen(s1) - 1;
	j = 0;
	while (set[j])
	{
		if (s1[len] == set[j])
		{
			len--;
			j = 0;
		}
		else
			j++;
	}
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*s;
	int		a;
	int		z;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	s = (char *)s1;
	a = ft_debut(s1, set);
	z = ft_fin(s1, set);
	if (a > z)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof (char) * (z - a + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy (str, s + a, z - a + 1);
	return (str);
}
