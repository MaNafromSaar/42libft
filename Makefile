# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnaumann <mnaumann@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 14:21:54 by mnaumann          #+#    #+#              #
#    Updated: 2024/03/07 12:34:07 by mnaumann         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
PATH_SRC = ./
HEADER = ./libft.h
CFLAGS = -Wall -Wextra -Werror -I$(HEADER)
SRCS = $(wildcard $(PATH_SRC)*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):  $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?
