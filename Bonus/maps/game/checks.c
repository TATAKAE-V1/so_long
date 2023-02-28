/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 00:17:22 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/03 01:00:14 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

void	check_1(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/1.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	check_0(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/0.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	check_p(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/p.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	check_c(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/c.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}

void	check_e(t_game *game, int y, int x)
{
	game->img = mlx_xpm_file_to_image(game->mlx_ptr,
			"Bonus/textures/ec.xpm", &game->width, &game->height);
	if (!game->img)
	{
		ft_putstr("Error with your xpms");
		exit(1);
	}
	mlx_put_image_to_window(game->mlx_ptr, game->win_ptr,
		game->img, x * game->width, y * game->height);
}
