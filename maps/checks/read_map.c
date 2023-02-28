/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:27:53 by ofarhat           #+#    #+#             */
/*   Updated: 2023/01/24 18:12:44 by ofarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

static void	check_save(char *save)
{
	if (!save[0] || save[ft_strlen(save) - 1] == '\n')
	{
		ft_putstr("Error:\nError With Your map");
		exit(1);
	}
}

char	**read_map(int fd, t_game *game)
{
	char	*save;
	char	*line;

	save = ft_calloc(1, 1);
	while (1)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		if (line[0] == '\n')
		{
			free(line);
			ft_putstr("Error:\nError With Your map");
			exit(1);
		}
		save = ft_strjoin(save, line);
		free(line);
	}
	check_save(save);
	game->split_map = ft_split(save, '\n');
	free(save);
	return (game->split_map);
}
