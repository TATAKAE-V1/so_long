/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy_changes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 01:28:06 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/03 00:59:25 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

void	change_nr(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/nr.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	change_nl(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/nl.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	change_nd(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/nd.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}
