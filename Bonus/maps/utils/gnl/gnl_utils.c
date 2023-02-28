/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:30:46 by ofarhat           #+#    #+#             */
/*   Updated: 2022/12/30 00:23:33 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_header.h"

int	ft_strlen_gnl(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr_gnl(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if ((char)c == 0)
		return (&s[i]);
	return (0);
}

char	*ft_strdup_gnl(char *s1)
{
	char	*cpy;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen_gnl(s1);
	cpy = malloc(len + 1);
	if (!cpy)
		return (0);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*p;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	p = malloc((ft_strlen_gnl(s1) + ft_strlen_gnl(s2) + 1));
	if (!p)
		return (0);
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	free (s1);
	return (p);
}
