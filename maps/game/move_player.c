/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 02:15:31 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/26 21:30:32 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

static void	change_w(int y, int x, t_game *game)
{
	if (game->split_map[y][x] == '0' || game->split_map[y][x] == 'C')
	{
		game->split_map[game->pos_y][game->pos_x] = '0';
		game->split_map[y][x] = 'P';
		check_0(game, game->pos_y, game->pos_x);
		change_u(game, y, x);
		game->pos_y = y;
		game->pos_x = x;
		count_moves();
	}
	if (check_cs(game) == 0)
	{
		change_e(game, game->e_y, game->e_x);
	}
	if (game->split_map[y][x] == 'E' && (check_cs(game) == 0))
	{
		count_moves();
		ft_putstr("You Win");
		exit(0);
	}
}

static void	change_s(int y, int x, t_game *game)
{
	if (game->split_map[y][x] == '0' || game->split_map[y][x] == 'C')
	{
		game->split_map[game->pos_y][game->pos_x] = '0';
		game->split_map[y][x] = 'P';
		check_0(game, game->pos_y, game->pos_x);
		check_p(game, y, x);
		game->pos_y = y;
		game->pos_x = x;
		count_moves();
	}
	if (check_cs(game) == 0)
	{
		change_e(game, game->e_y, game->e_x);
	}
	if (game->split_map[y][x] == 'E' && (check_cs(game) == 0))
	{
		count_moves();
		ft_putstr("You Win");
		exit(0);
	}
}

static void	change_d(int y, int x, t_game *game)
{
	if (game->split_map[y][x] == '0' || game->split_map[y][x] == 'C')
	{
		game->split_map[game->pos_y][game->pos_x] = '0';
		game->split_map[y][x] = 'P';
		check_0(game, game->pos_y, game->pos_x);
		change_r(game, y, x);
		game->pos_y = y;
		game->pos_x = x;
		count_moves();
	}
	if (check_cs(game) == 0)
	{
		change_e(game, game->e_y, game->e_x);
	}
	if (game->split_map[y][x] == 'E' && (check_cs(game) == 0))
	{
		count_moves();
		ft_putstr("You Win");
		exit(0);
	}
}

static void	change_a(int y, int x, t_game *game)
{
	if (game->split_map[y][x] == '0' || game->split_map[y][x] == 'C')
	{
		game->split_map[game->pos_y][game->pos_x] = '0';
		game->split_map[y][x] = 'P';
		check_0(game, game->pos_y, game->pos_x);
		change_l(game, y, x);
		game->pos_y = y;
		game->pos_x = x;
		count_moves();
	}
	if (check_cs(game) == 0)
	{
		change_e(game, game->e_y, game->e_x);
	}
	if (game->split_map[y][x] == 'E' && (check_cs(game) == 0))
	{
		count_moves();
		ft_putstr("You Win");
		exit(0);
	}
}

int	move_player(int keycode, t_game *game)
{
	if (keycode == 53)
	{
		exit(0);
	}
	if (keycode == 13)
	{
		change_w(game->pos_y - 1, game->pos_x, game);
	}
	if (keycode == 1)
	{
		change_s(game->pos_y + 1, game->pos_x, game);
	}
	if (keycode == 2)
	{
		change_d(game->pos_y, game->pos_x + 1, game);
	}
	if (keycode == 0)
	{
		change_a(game->pos_y, game->pos_x - 1, game);
	}
	return (0);
}
