/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 03:11:39 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/02 23:55:06 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

static void	check_args(int argc, char *argv[], t_game *game)
{
	if (argc != 2)
	{
		write(1, "Error:\nInvalid Number Of Arguments", 34);
		exit(1);
	}
	else if (name_check(argv[1]) == 0)
	{
		ft_putstr("Error:\nInvalid File Name");
		exit(1);
	}
	game->fd = open(argv[1], O_RDONLY | O_DIRECTORY);
	if (game->fd != -1)
	{
		ft_putstr("Error:\nThis is a Directory");
		exit(1);
	}
	game->fd = open(argv[1], O_RDONLY);
	if (game->fd == -1)
	{
		ft_putstr("Error:\nFile does not exist");
		exit(1);
	}
}

int	main(int argc, char *argv[])
{
	t_game	game;

	check_args(argc, argv, &game);
	read_map(game.fd, &game);
	all_check(&game);
	game.mlx_ptr = mlx_init();
	show_map(&game);
	mlx_loop_hook(game.mlx_ptr, move_enemy, &game);
	mlx_hook(game.win_ptr, 2, 0, move_player, &game);
	mlx_hook(game.win_ptr, 17, 0, (void *)exit, &game);
	mlx_loop(game.mlx_ptr);
}
