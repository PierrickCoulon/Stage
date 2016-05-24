##
## Makefile for makefil in /home/coulon_b/rendu/Piscine_C_J10
##
## Made by Pierrick Coulon
## Login   <coulon_b@epitech.net>
##
## Started on  Fri Oct  9 15:03:54 2015 Pierrick Coulon
## Last update Fri Apr 29 13:27:44 2016 Cyril pinalo_c
##

CC      = gcc

RM      = rm -f

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I./include

NAME   = ia

SRCS	= main.c		\
	  srcs/get_next_line.c	\
	  srcs/my_getnbr.c	\
	  srcs/my_strlen.c	\
	  srcs/my_putstr.c	\
	  srcs/my_putstr_err.c	\
	  srcs/malloc_tab.c	\
	  srcs/my_put_nbr.c	\
	  srcs/trash_gnl.c	\
	  srcs/gnl.c		\

OBJS    = $(SRCS:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)
	cp $(NAME) n4s_package

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
