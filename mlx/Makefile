# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 17:20:08 by szerisen          #+#    #+#              #
#    Updated: 2023/04/19 12:08:46 by szerisen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME=libmlx.a
SRC= mlx_shaders.c mlx_new_window.m mlx_init_loop.m mlx_new_image.m mlx_xpm.c mlx_int_str_to_wordtab.c
SRC+= mlx_png.c mlx_mouse.m
OBJ1=$(SRC:.c=.o)
OBJ=$(OBJ1:.m=.o)
CFLAGS+=-O2

# colors for printing
Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

# changed the following 8 lines to silence all the warnings created
%.o : %.c
	@cc -O2 -w -DSTRINGPUTX11   -c -o $@ $<
%.o : %.m
	@cc -O2 -w -DSTRINGPUTX11   -c -o $@ $<

# add to match string put with X11 in size and position
CFLAGS+= -DSTRINGPUTX11

all: $(NAME)

$(NAME): $(OBJ)
	ar -r $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) *~
	rm -f mlx_app

re: clean all
