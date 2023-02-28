/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 00:02:03 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/22 11:36:17 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_putchar_printf(char c, int *len);
void	ft_putstr_printf(char *str, int *len);
void	ft_putnbr_printf(long n, int *len);
void	ft_putunsigned_printf(unsigned int n, int *len);
void	ft_puthexa_printf(unsigned int n, char c, int *len);
void	ft_putptr_printf(void *p, int *len);

#endif