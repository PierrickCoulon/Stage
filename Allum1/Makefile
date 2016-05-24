##
## Makefile for makefil in /home/coulon_b/rendu/Piscine_C_J10
##
## Made by Pierrick Coulon
## Login   <coulon_b@epitech.net>
##
## Started on  Fri Oct  9 15:03:54 2015 Pierrick Coulon
## Last update Wed Feb 17 17:29:06 2016 COULON Pierrick
##

CC      = gcc

RM      = rm -f

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I.

NAME   = allum1

SRCS	= lib/print_game_board.c \
	  main.c \
	  lib/write_gnl.c \
	  lib/modif_ia_display.c \
	  lib/display.c \
	  lib/check_err_for_l1.c \
	  lib/check_err_for_l2.c \
	  lib/check_err_for_l3.c \
	  lib/check_err_for_l4.c \
	  lib/check_who_win.c \
	  lib/check_line2.c \
	  lib/check_line3.c \
	  lib/check_line.c \
	  lib/check_line_ia.c \
	  lib/check_match_ia.c \
	  lib/check_pips.c \
	  lib/modification.c \
	  lib/check_matches.c \
	  lib/get_next_line.c \
	  lib/my_putchar.c \
	  lib/my_putstr.c \
	  lib/my_put_nbr.c \
	  lib/my_getnbr.c \

OBJS    = $(SRCS:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
