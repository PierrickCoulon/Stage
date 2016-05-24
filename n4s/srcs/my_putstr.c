/*
** my_putstr.c for my_putstr in /home/pinalo_c/rendu/C_prog_elem/CPE_2015_n4s/CPE_2015_n4s
** 
** Made by Cyril pinalo_c
** Login   <pinalo_c@epitech.net>
** 
** Started on  Wed Apr 27 15:18:23 2016 Cyril pinalo_c
** Last update Wed Apr 27 15:30:06 2016 Cyril pinalo_c
*/

#include "ia.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		 my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != 0)
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}
