# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mirokugo <mirokugo@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/16 22:59:14 by mirokugo          #+#    #+#              #
#    Updated: 2024/06/16 22:59:14 by mirokugo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
NAME-libft = libft.a
AR = ar
ARFLAGS = rc
SRCS = ft_printf.c
SRCS-libft = $(wildcard libft/*.c)
OBJS = $(SRCS:.c=.o)
OBJS-libft = $(SRCS-libft:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(NAME-libft)
	$(AR) $(ARFLAGS) $@ $^

libft: $(NAME-libft)

$(NAME-libft): $(OBJS-libft)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)	$(OBJS-libft)

fclean: clean
	rm -f $(NAME) $(NAME-libft)

re: fclean

.PHONY: all clean fclean re
