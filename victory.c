/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   victory.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:12:06 by szerisen          #+#    #+#             */
/*   Updated: 2023/04/20 20:39:26 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	winner(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	printf("-----------------------------------------------\n");
	printf("|    🎉🎉🎉  Congratulations!!!!!  🎉🎉🎉     |\n");
	printf("|    You found all collectibles and exit.     |\n");
	printf("|        ✓✓✓✓✓✓✓✓ You won! ✓✓✓✓✓✓✓✓           |\n");
	printf("|     Is %d moves the best you can do?         |\n", data->counter);
	printf("-----------------------------------------------\n");
	free_double_pointer(data);
	exit(EXIT_SUCCESS);
}

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
