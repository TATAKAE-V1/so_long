/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:30:11 by ofarhat           #+#    #+#             */
/*   Updated: 2022/12/29 23:49:54 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_header.h"

char	*ft_strchr(const char *s, int c)
{
	char	cc;
	char	*ss;

	cc = (char)c;
	ss = (char *)s;
	while (*ss)
	{
		if (*ss == cc)
			return (ss);
		ss++;
	}
	if (*ss == cc)
		return (ss);
	return (NULL);
}
