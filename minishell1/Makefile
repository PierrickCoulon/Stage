##
## Makefile for makefil in /home/coulon_b/rendu/Piscine_C_J10
##
## Made by Pierrick Coulon
## Login   <coulon_b@epitech.net>
##
## Started on  Fri Oct  9 15:03:54 2015 Pierrick Coulon
## Last update Sun Jan 24 16:39:04 2016 
##

CC      = gcc

RM      = rm -f

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I./include/

LDFLAGS = -lmy -L./lib/

NAME   = mysh

SRCS	= mysh.c \
	  lib/get_gnl.c \
	  lib/use_ac_av.c \
	  lib/get_env.c \
	  lib/core.c \
	  lib/my_set.c \
	  lib/my_for_exec.c \
	  lib/for_cd.c \
	  lib/for_exit.c \
	  lib/get_next_line.c \
	  lib/my_putstr.c \
	  lib/my_putchar.c \
	  lib/my_strlen.c \
	  lib/my_strcpy.c \
	  lib/my_strcat.c \
	  lib/my_strcat_egal.c \
	  lib/my_put_nbr.c \
	  lib/my_getnbr.c \

OBJS    = $(SRCS:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
	## $(CC) -c $(SRCS) -I./include
	 $(CC) -o $(NAME) $(OBJS) $(CFLAGS) $(LDFFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
