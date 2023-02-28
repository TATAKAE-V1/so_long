/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 04:00:05 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/22 11:40:52 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned_printf(unsigned int n, int *len)
{
	if (n >= 0 && n <= 9)
		ft_putchar_printf(n + 48, len);
	else if (n > 9)
	{
		ft_putnbr_printf(n / 10, len);
		ft_putnbr_printf(n % 10, len);
	}
}
