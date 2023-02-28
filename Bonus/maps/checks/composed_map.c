/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   composed_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 02:26:02 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/02 21:58:06 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

int	composed_map(t_game *game)
{
	game->y = 0;
	while (game->split_map[game->y])
	{
		game->x = 0;
		while (game->split_map[game->y][game->x])
		{
			if (game->split_map[game->y][game->x] != '0'
					&& game->split_map[game->y][game->x] != '1'
					&& game->split_map[game->y][game->x] != 'C'
					&& game->split_map[game->y][game->x] != 'P'
					&& game->split_map[game->y][game->x] != 'E'
					&& game->split_map[game->y][game->x] != 'N')
				return (0);
			game->x++;
		}
		game->y++;
	}
	return (1);
}
