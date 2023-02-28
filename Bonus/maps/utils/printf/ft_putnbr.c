/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:23:06 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/22 11:39:53 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_printf(long n, int *len)
{
	if (n < 0)
	{
		ft_putchar_printf('-', len);
		ft_putnbr_printf(n * (-1), len);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_printf(n + 48, len);
	else if (n > 9)
	{
		ft_putnbr_printf(n / 10, len);
		ft_putnbr_printf(n % 10, len);
	}
}
