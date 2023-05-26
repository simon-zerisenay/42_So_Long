/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:51:04 by szerisen          #+#    #+#             */
/*   Updated: 2023/04/20 19:32:29 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_double_pointer(t_data *data)
{
	int	i;

	i = 0;
	while (data->map->map[i])
		i++;
	while (i >= 0)
		free(data->map->map[i--]);
	free(data->map->map);
	free(data->img);
}

int	ft_key_hook(int keycode, t_data *data)
{
	if (keycode == ESC)
		ft_exit(data);
	else if (keycode == W || keycode == UARROW)
		ft_move(data, 'y', UP);
	else if (keycode == A || keycode == LARROW)
		ft_move(data, 'x', LEFT);
	else if (keycode == S || keycode == DARROW)
		ft_move(data, 'y', DOWN);
	else if (keycode == D || keycode == RARROW)
		ft_move(data, 'x', RIGHT);
	if (data->map->map[data->p_y][data->p_x] == 'E')
		winner(data);
	return (0);
}
