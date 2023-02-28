/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:55:29 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/02 22:11:31 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

static void	dup_map(t_game *game)
{
	int	i;

	i = 0;
	game->map_dup = ft_calloc((game->line_count + 1), (sizeof(char *)));
	if (!game->map_dup)
		return ;
	while (game->split_map[i])
	{
		game->map_dup[i] = ft_strdup(game->split_map[i]);
		i++;
	}
}

static void	check_for_c(char **game, int y, int x)
{
	if (game[y][x] != 'P' && game[y][x] != '0' && game[y][x] != 'C'
		&& game[y][x] != 'N')
		return ;
	game[y][x] = 'A';
	check_for_c(game, y + 1, x);
	check_for_c(game, y - 1, x);
	check_for_c(game, y, x + 1);
	check_for_c(game, y, x - 1);
	return ;
}

static void	check_for_e(char **game, int y, int x)
{
	if (game[y][x] != '0' && game[y][x] != 'A' && game[y][x] != 'E')
		return ;
	game[y][x] = 'B';
	check_for_e(game, y + 1, x);
	check_for_e(game, y - 1, x);
	check_for_e(game, y, x + 1);
	check_for_e(game, y, x - 1);
	return ;
}

int	valid_path(t_game *game)
{
	game->y = 0;
	dup_map(game);
	check_for_c(game->map_dup, game->pos_y, game->pos_x);
	check_for_e(game->map_dup, game->pos_y, game->pos_x);
	while (game->map_dup[game->y])
	{
		game->x = 0;
		while (game->map_dup[game->y][game->x])
		{
			if (game->map_dup[game->y][game->x] == 'C'
			|| game->map_dup[game->y][game->x] == 'E')
				return (0);
			game->x++;
		}
		game->y++;
	}
	return (1);
}
