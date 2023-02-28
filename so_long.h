/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 13:23:26 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/24 18:16:03 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <mlx.h>
# include <fcntl.h>
# include <limits.h>
# include "maps/utils/gnl/gnl_header.h"
# include "maps/utils/libft/libft_header.h"
# include "maps/utils/printf/ft_printf.h"
# include <errno.h>

typedef struct s_game
{
	int		fd;
	char	**split_map;
	int		line_count;
	char	**map_dup;
	int		y;
	int		x;
	int		pos_y;
	int		pos_x;
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img;
	int		width;
	int		height;
	int		e_y;
	int		e_x;
	int		j;
	int		count[3];
}t_game;

char	**read_map(int fd, t_game *game);
int		composed_map(t_game *game);
int		char_check(t_game *game);
int		rectangular_map(t_game *game);
int		closed_map(t_game *game);
int		name_check(char	*name);
int		valid_path(t_game *game);
void	all_check(t_game *game);
void	show_map(t_game *game);
void	check_1(t_game *game, int y, int x);
void	check_0(t_game *game, int y, int x);
void	check_p(t_game *game, int y, int x);
void	check_c(t_game *game, int y, int x);
void	check_e(t_game *game, int y, int x);
int		move_player(int keycode, t_game *game);
void	change_u(t_game *game, int y, int x);
void	change_r(t_game *game, int y, int x);
void	change_l(t_game *game, int y, int x);
void	change_e(t_game *game, int y, int x);
int		check_cs(t_game *game);
void	count_moves(void);

#endif