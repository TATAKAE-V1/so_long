/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangular_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 07:54:01 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/24 18:12:47 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

int	rectangular_map(t_game *game)
{
	int	next;

	game->y = 0;
	next = game->y + 1;
	while (game->split_map[game->y] && game->split_map[next])
	{
		if (ft_strlen(game->split_map[game->y])
			!= ft_strlen(game->split_map[next]))
			return (0);
		next++;
		game->y++;
	}
	return (1);
}
