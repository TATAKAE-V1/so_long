/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   changes.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 04:02:51 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/03 00:59:50 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

void	change_u(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/pu.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	change_r(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/pr.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	change_l(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/pl.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	change_e(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/e.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

int	check_cs(t_game *game)
{
	int	c;

	game->y = 0;
	c = 0;
	while (game->split_map[game->y])
	{
		game->x = 0;
		while (game->split_map[game->y][game->x])
		{
			if (game->split_map[game->y][game->x] == 'C')
				c++;
			if (game->split_map[game->y][game->x] == 'E')
			{
				game->e_y = game->y;
				game->e_x = game->x;
			}
			game->x++;
		}
		game->y++;
	}
	return (c);
}
