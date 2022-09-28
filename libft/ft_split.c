/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:35:14 by sleon             #+#    #+#             */
/*   Updated: 2022/05/21 15:09:22 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (s[0] != c)
		words++;
	i = 1;
	while (s[i])
	{
		if ((s[i] != c) && (s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static int	ft_size(char const *s, char c, int i)
{
	int	x;

	x = 0;
	while (s[i] != c && s[i] != '\0')
	{
		x++;
		i++;
	}
	return (x);
}

static void	*ft_free(char **s, int j)
{
	while (j >= 0)
	{
		free(s[j]);
		j--;
	}
	free(s);
	return (0);
}

static char	**ft_empty_malloc(void)
{
	char	**dest;

	dest = malloc(sizeof(char *) * 1);
	dest[0] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		j;
	int		start;

	start = 0;
	if (s == NULL || ft_strlen(s) == 0)
		return (ft_empty_malloc());
	dest = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (dest == 0)
		return (0);
	j = -1;
	while (s[start] == c)
		start++;
	while (++j < ft_count(s, c) + 1 && start < (int)ft_strlen(s))
	{
		dest[j] = ft_substr(s, start, ft_size(s, c, start));
		if (dest[j] == 0)
			ft_free(dest, j);
		start += ft_size(s, c, start);
		while (s[start] == c)
			start++;
	}
	dest[j] = NULL;
	return (dest);
}
