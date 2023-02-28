/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:44:22 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/24 18:12:10 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

static void	checks(t_game *game)
{
	if (game->split_map[game->y][game->x] == 'E')
		game->count[0]++;
	if (game->split_map[game->y][game->x] == 'P')
	{
		game->pos_y = game->y;
		game->pos_x = game->x;
		game->count[1]++;
	}
	if (game->split_map[game->y][game->x] == 'C')
		game->count[2]++;
}

int	char_check(t_game *game)
{
	game->y = 0;
	game->count[0] = 0;
	game->count[1] = 0;
	game->count[2] = 0;
	while (game->split_map[game->y])
	{
		game->x = 0;
		while (game->split_map[game->y][game->x])
		{
			checks(game);
			game->x++;
		}
		game->y++;
	}
	if (game->count[0] == 1 && game->count[1] == 1 && game->count[2] != 0)
		return (1);
	return (0);
}
