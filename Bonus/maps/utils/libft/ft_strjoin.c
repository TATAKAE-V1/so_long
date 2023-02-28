/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:30:19 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/24 14:52:20 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_header.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	size;

	if (!s1 || !s2)
		return (0);
	size = (ft_strlen(s1) + ft_strlen(s2));
	p = malloc(size + 1);
	if (!p)
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy((p + ft_strlen(s1)), s2, ft_strlen(s2));
	free((void *) s1);
	p[size] = '\0';
	return (p);
}
