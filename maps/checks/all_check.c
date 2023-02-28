/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:29:32 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/24 18:11:17 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

static void	all_check_rest(t_game *game)
{
	if (rectangular_map(game) == 0)
	{
		ft_putstr("Error:\nThe map must be rectangular.");
		exit(1);
	}
	if (closed_map(game) == 0)
	{
		ft_putstr("Error:\nThe map must be closed/surrounded by walls.");
		exit(1);
	}
	if (valid_path(game) == 0)
	{
		ft_putstr("Error:\nThere is no valid path.");
		exit(1);
	}
}

void	all_check(t_game *game)
{
	if (composed_map(game) == 0)
	{
		ft_putstr("Error:\n The map can be composed of only: ");
		ft_putstr("0, 1, C, E and P.");
		exit(1);
	}
	if (char_check(game) == 0)
	{
		ft_putstr("Error:\nThe map must contain 1 exit, at least 1 ");
		ft_putstr("collectible, and 1 starting position to be valid.");
		exit(1);
	}
	all_check_rest(game);
}
