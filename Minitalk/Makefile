##
## Makefile for makefil in /home/coulon_b/rendu/Piscine_C_J10
##
## Made by Pierrick Coulon
## Login   <coulon_b@epitech.net>
##
## Started on  Fri Oct  9 15:03:54 2015 Pierrick Coulon
## Last update Mon Feb  8 15:01:20 2016 COULON Pierrick
##

CC      =	gcc

RM      =	rm -f

CFLAGS +=	-Wextra -Wall -Werror
CFLAGS +=	-ansi -pedantic

SRC1	=	client/client.c \
		lib/my_getnbr.c \
		lib/my_putchar.c \
		lib/my_putstr.c \
		lib/my_put_nbr.c \

SRC2	=	server/server.c \
		lib/my_putchar.c \
		lib/my_getnbr.c \
		lib/my_putstr.c \
		lib/my_put_nbr.c \

OBJS1   =	$(SRC1:.c=.o)

OBJS2   =	$(SRC2:.c=.o)

NAME1	=	client/client

NAME2	=	server/server

all:		$(NAME1)

$(NAME1):	$(OBJS1) $(OBJS2)
		$(CC) $(OBJS1) -o $(NAME1) $(CFLAGS) include/my_minitalk.h
		$(CC) $(OBJS2) -o $(NAME2) $(CFLAGS) include/my_minitalk.h

clean:
		$(RM) $(OBJS1)
		$(RM) $(OBJS2)

fclean:		clean
		$(RM) $(NAME1)
		$(RM) $(NAME2)

re: fclean all

.PHONY: all clean fclean re
	$(NAME1) $(NAME2)
