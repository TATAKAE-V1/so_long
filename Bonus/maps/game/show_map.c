/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 23:05:57 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/03 00:34:54 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

void	show_map(t_game *game)
{
	game->y = 0;
	game->win_ptr = mlx_new_window(game->mlx_ptr, ft_strlen(game->split_map[0])
			* 70, game->line_count * 70, "so_long");
	while (game->split_map[game->y])
	{
		game->x = 0;
		while (game->split_map[game->y][game->x])
		{
			if (game->split_map[game->y][game->x] == '1')
				check_1(game, game->y, game->x);
			if (game->split_map[game->y][game->x] == '0')
				check_0(game, game->y, game->x);
			if (game->split_map[game->y][game->x] == 'P')
				check_p(game, game->y, game->x);
			if (game->split_map[game->y][game->x] == 'C')
				check_c(game, game->y, game->x);
			if (game->split_map[game->y][game->x] == 'E')
				check_e(game, game->y, game->x);
			if (game->split_map[game->y][game->x] == 'N')
				change_nd(game, game->n_y, game->n_x);
			game->x++;
		}
		game->y++;
	}
	mlx_string_put(game->mlx_ptr, game->win_ptr, 0, 0, 16777215, "moves: ");
}
