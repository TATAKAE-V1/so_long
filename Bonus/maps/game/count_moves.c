/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:22:11 by ofarhat           #+#    #+#             */
/*   Updated: 2023/02/03 00:42:34 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long_bonus.h"

void	count_moves(t_game *game)
{
	char	*str;

	str = ft_itoa(++game->moves);
	check_1(game, 0, 0);
	mlx_string_put(game->mlx_ptr, game->win_ptr, 0, 0, 16777215, "moves: ");
	check_1(game, 0, 1);
	mlx_string_put(game->mlx_ptr, game->win_ptr, 75, 0, 16777215, str);
	free(str);
}
