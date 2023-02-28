/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:30:22 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/02 23:40:29 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

static void	check_nr(int y, int x, t_game *game)
{
	game->split_map[game->n_y][game->n_x] = '0';
	game->split_map[y][x] = 'N';
	check_0(game, game->n_y, game->n_x);
	change_nr(game, y, x);
	game->n_y = y;
	game->n_x = x;
}

static void	check_nl(int y, int x, t_game *game)
{
	game->split_map[game->n_y][game->n_x] = '0';
	game->split_map[y][x] = 'N';
	check_0(game, game->n_y, game->n_x);
	change_nl(game, y, x);
	game->n_y = y;
	game->n_x = x;
}

int	move_enemy(t_game *game)
{
	static int	i;
	static int	dir;

	if (i == 3000)
	{
		if (game->split_map[game->n_y][game->n_x + 1] == '0' && !dir)
			check_nr(game->n_y, game->n_x + 1, game);
		else if (game->split_map[game->n_y][game->n_x - 1] == '0' && dir)
			check_nl(game->n_y, game->n_x - 1, game);
		else if (game->split_map[game->n_y][game->n_x + 1] == 'P'
			|| game->split_map[game->n_y][game->n_x - 1] == 'P')
		{
			ft_putstr_fd("YOU LOSE", 2);
			exit(0);
		}
		else
			dir = !dir;
		i = 0;
	}
	i++;
	return (0);
}
