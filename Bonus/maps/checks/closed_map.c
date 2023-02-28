/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closed_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:27:28 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/01 00:40:39 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

static int	count_line(t_game *game)
{
	game->y = 0;
	while (game->split_map[game->y])
	{
		game->y++;
	}
	game->line_count = (game->y);
	return (game->y);
}

static int	count_chars(t_game *game)
{
	game->x = 0;
	while (game->split_map[0][game->x])
	{
		game->x++;
	}
	return (game->x);
}

static int	first_and_last_line(t_game *game)
{
	int	last;

	game->x = 0;
	last = (count_line(game) - 1);
	while (game->split_map[0][game->x])
	{
		if (game->split_map[0][game->x] != '1'
			|| game->split_map[last][game->x] != '1')
			return (0);
		game->x++;
	}
	return (1);
}

int	closed_map(t_game *game)
{
	int	last_char;

	if (first_and_last_line(game) == 0)
		return (0);
	game->y = 0;
	last_char = (count_chars(game) - 1);
	while (game->split_map[game->y])
	{
		game->x = 0;
		while (game->split_map[game->y][game->x])
		{
			if (game->split_map[game->y][0] != '1'
				|| game->split_map[game->y][last_char] != '1')
				return (0);
			game->x++;
		}
		game->y++;
	}
	return (1);
}
