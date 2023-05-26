/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_images.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:04:13 by szerisen          #+#    #+#             */
/*   Updated: 2023/04/20 20:57:19 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	put_background(t_data *data)
{
	int		y;
	int		x;

	y = 0;
	while (y < data->size_y)
	{
		x = 0;
		while (x < data->size_x)
		{
			mlx_put_image_to_window(data->mlx, data->win,
				data->img->background, x, y);
			x += IMG_W;
		}
		y += IMG_H;
	}
}

void	put_object(t_data *data, char *relative_path)
{
	int		img_width;
	int		img_height;

	data->map->object = mlx_xpm_file_to_image(data->mlx, relative_path,
			&img_width, &img_height);
	if (!data->map->object)
		handle_error(data, "Error\nexit file not found", 1);
	mlx_put_image_to_window(data->mlx, data->win, data->map->object,
		(data->map->x * IMG_W), (data->map->y * IMG_H));
	free(data->map->object);
}

void	put_player(t_data *data)
{
	data->p_x = data->map->x;
	data->p_y = data->map->y;
	mlx_put_image_to_window(data->mlx, data->win, data->img->player_up,
		(data->p_x * IMG_W), (data->p_y * IMG_H));
}
