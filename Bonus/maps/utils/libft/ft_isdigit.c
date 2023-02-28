/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:28:19 by ofarhat           #+#    #+#             */
/*   Updated: 2022/12/29 23:48:44 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_header.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}