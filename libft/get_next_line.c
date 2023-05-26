/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 17:52:55 by szerisen          #+#    #+#             */
/*   Updated: 2023/04/19 14:40:09 by szerisen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc_gnl(size_t nelem, size_t elsize)
{
	char			*ptr;
	unsigned int	i;
	size_t			x;

	i = 0;
	x = nelem * elsize;
	ptr = (char *)malloc(x);
	if (ptr == NULL)
		return (0);
	while (i < x)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_update_nl_gnl(char **next_line, int position)
{
	char	*tmp;
	int		len;

	len = ft_strlen_gnl(*next_line) - position;
	tmp = ft_strndup_gnl(*next_line + position, len);
	ft_free_gnl(next_line);
	*next_line = tmp;
	return (*next_line);
}

char	*ft_output_gnl(char **next_line, int position, int bytes)
{
	char	*line;

	if (((bytes == 0 || bytes == -1) && *next_line == NULL) || position == -5)
	{
		if (*next_line)
			return (*next_line);
		return (NULL);
	}
	line = NULL;
	if (position == -1)
		position = ft_strlen_gnl(*next_line);
	else
		position++;
	line = ft_strndup_gnl(*next_line, position);
	if (position == ft_strlen_gnl(*next_line))
		ft_free_gnl(next_line);
	else
		*next_line = ft_update_nl_gnl(next_line, position);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*next_line;
	char		*buff;
	int			position;
	int			bytes;

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > 10240)
		return (NULL);
	buff = NULL;
	position = ft_strchr_gnl(next_line, '\n', 0);
	while (position == -1 && position != -5)
	{
		buff = ft_calloc_gnl(BUFFER_SIZE + 1, 1);
		if (buff == NULL)
			return (NULL);
		bytes = read(fd, buff, BUFFER_SIZE);
		if (bytes == 0 || bytes == -1)
			break ;
		next_line = ft_strnjoin_gnl(next_line, buff, bytes);
		position = ft_strchr_gnl(next_line, '\n', 1);
		ft_free_gnl(&buff);
	}
	ft_free_gnl(&buff);
	return (ft_output_gnl(&next_line, position, bytes));
}
