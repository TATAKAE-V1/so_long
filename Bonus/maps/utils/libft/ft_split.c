/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:30:08 by ofarhat           #+#    #+#             */
/*   Updated: 2022/12/29 23:49:49 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_header.h"

static int	ft_wcount(char const *s, char c)
{
	int	i;
	int	j;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

static char	**ft_free(char **p, size_t i)
{
	while (i >= 0)
	{
		free(p[i]);
		i--;
	}
	free(p);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		a;
	int		b;

	p = ft_calloc((ft_wcount(s, c) + 1), (sizeof(char *)));
	if (!p)
		return (0);
	i = 0;
	a = 0;
	b = 0;
	while (i < ft_wcount(s, c))
	{
		while (s[a] == c)
			a++;
		b = a;
		while (s[b] && s[b] != c)
			b++;
		p[i] = ft_substr(s, a, (b - a));
		if (!p[i])
			return (ft_free(p, i - 1));
		a = b;
		i++;
	}
	return (p);
}
