/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:28:27 by ofarhat           #+#    #+#             */
/*   Updated: 2022/12/29 23:48:53 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_header.h"

static int	numblen(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	long	x;

	i = numblen(n) - 1;
	str = malloc(numblen(n) + 1);
	x = n;
	if (!str)
		return (NULL);
	if (x == 0)
		str[0] = x + 48;
	if (x < 0)
	{
		str[0] = '-';
		x *= -1;
	}
	while (x)
	{
		str[i] = (x % 10) + 48;
		x = x / 10;
		i--;
	}
	str[numblen(n)] = '\0';
	return (str);
}
