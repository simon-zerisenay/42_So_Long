# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: szerisen <szerisen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 12:53:31 by szerisen          #+#    #+#              #
#    Updated: 2023/04/21 16:41:46 by szerisen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -g

Y = "\033[33m"
R = "\033[31m"
G = "\033[32m"
B = "\033[34m"
X = "\033[0m"
UP = "\033[A"
CUT = "\033[K"

CFILES = \
		ft_atoi.c\
		ft_calloc.c\
		ft_count_c.c\
		ft_count_lines.c\
		ft_line_length.c\
		ft_strchr.c\
		ft_strjoin.c\
		ft_strlen.c\
		ft_strnstr.c\
		get_next_line_utils.c\
		get_next_line.c\
		ft_strncmp.c\

OBJECTS = $(CFILES:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
