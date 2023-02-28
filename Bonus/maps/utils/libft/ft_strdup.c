/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:30:13 by ofarhat           #+#    #+#             */
/*   Updated: 2022/12/29 23:49:59 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_header.h"

char	*ft_strdup(const char *s1)
{
	char	*cpy;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	cpy = malloc(len + 1);
	if (!cpy)
		return (NULL);
	while (s1[i])
	{
		cpy[i] = s1[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
