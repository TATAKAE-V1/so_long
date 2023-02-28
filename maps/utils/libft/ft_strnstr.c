/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:30:35 by ofarhat           #+#    #+#             */
/*   Updated: 2022/12/29 23:50:49 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_header.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	i = 0;
	j = 0;
	if (ft_strlen(n) == 0)
		return (h);
	while (i < len && h[i])
	{
		if (h[i] == n[j])
		{
			j++;
			while (i + j < len && n[j] && h[i + j] == n[j])
				j++;
			if (j == ft_strlen(n))
				return (&h[i]);
			j = 0;
		}
		i++;
	}
	return (NULL);
}
