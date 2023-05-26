# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 10:57:58 by szerisen          #+#    #+#              #
#    Updated: 2023/04/21 16:41:04 by szerisen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

MLX_PATH = mlx/

MLX_LIB = $(MLX_PATH)libmlx.a

MLX_FLAGS = -Lmlx -lmlx -framework OpenGL -framework AppKit

LIBFT_PATH = libft/

LIBFT_LIB = $(LIBFT_PATH)libft.a

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

CFILES = \
		initializer.c\
		key_hook.c\
		map.c\
		move.c\
		validate_input.c\
		place_images.c\
		main.c\
		victory.c\
		check_valid_path.c\
		helpers.c\

OBJECTS = $(CFILES:.c=.o)

all: subsystems $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -Imlx -c -o $@ $<

subsystems:
	@make -C $(MLX_PATH) all
	@make -C $(LIBFT_PATH) all

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(MLX_FLAGS) $(OBJECTS) $(MLX_LIB) $(LIBFT_LIB) -o $(NAME)

clean:
	make -C $(MLX_PATH) clean
	make -C $(LIBFT_PATH) clean
	rm -f $(OBJECTS)

fclean: clean
	make -C $(MLX_PATH) fclean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

norm:
	norminette libft initializer.c key_hook.c map.c move.c validate_input.c place_images.c main.c so_long.h victory.c helpers.c

.PHONY: all clean fclean re norm
