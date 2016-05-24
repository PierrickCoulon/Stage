##
## Makefile for makefil in /home/coulon_b/rendu/Piscine_C_J10
##
## Made by Pierrick Coulon
## Login   <coulon_b@epitech.net>
##
## Started on  Fri Oct  9 15:03:54 2015 Pierrick Coulon
## Last update Tue May 24 16:24:30 2016 Pierrick COULON
##

CC      = gcc

RM      = rm -f

CFLAGS += -Wextra -Wall -Werror
CFLAGS += -ansi -pedantic
CFLAGS += -I./include

NAME   = profondeur/solver
SRCS	=	profondeur/get_next_line.c \
	  	profondeur/main.c \
	  	profondeur/my_putchar.c \
	  	profondeur/my_putchar_modif.c \
	  	profondeur/my_putstr.c \
	  	profondeur/my_getnbr.c \
	  	profondeur/my_merge.c \
	  	profondeur/my_strlen.c \
	  	profondeur/my_strdup.c \
	  	profondeur/my_strcpy.c \
	  	profondeur/str_to_word_tab.c \

OBJS     = $(SRCS:.c=.o)

all: 	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
