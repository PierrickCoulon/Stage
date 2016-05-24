/*
** my_putchar.c for my_putchar.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_my_exec/lib
** 
** Made by 
** Login   <coulon-b@epitech.net>
** 
** Started on  Tue Jan  5 11:45:55 2016 
** Last update Mon Feb  8 12:54:54 2016 COULON Pierrick
*/

#include <unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
