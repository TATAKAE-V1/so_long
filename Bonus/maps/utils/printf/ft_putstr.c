/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 22:48:36 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/22 11:40:37 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_printf(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
		ft_putstr_printf("(null)", len);
	else
	{
		while (str[i])
		{
			ft_putchar_printf(str[i], len);
			i++;
		}
	}
}
