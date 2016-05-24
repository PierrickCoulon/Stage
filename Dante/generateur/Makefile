##
## Makefile for makefil in /home/coulon_b/rendu/Piscine_C_J10
##
## Made by Pierrick Coulon
## Login   <coulon_b@epitech.net>
##
## Started on  Fri Oct  9 15:03:54 2015 Pierrick Coulon
## Last update Sun May 22 17:48:10 2016 COULON Pierrick
##

CC      = gcc

RM      = rm -f

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I./include

NAME   = generateur

SRCS	= main.c \
	  get_next_line.c \
	  my_putchar.c \
	  fill.c \
	  my_putstr.c \
	  my_putstr_modif.c \
	  my_merge.c \
	  my_strlen.c \
	  my_strdup.c \
	  my_strcpy.c \
	  my_getnbr.c \
	  str_to_word_tab.c \

OBJS    = $(SRCS:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
