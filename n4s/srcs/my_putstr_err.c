/*
** my_putstr_err.c for my_putstr_err in /home/pinalo_c/rendu/C_prog_elem/CPE_2015_n4s/CPE_2015_n4s
** 
** Made by Cyril pinalo_c
** Login   <pinalo_c@epitech.net>
** 
** Started on  Wed Apr 27 15:18:49 2016 Cyril pinalo_c
** Last update Wed Apr 27 15:30:17 2016 Cyril pinalo_c
*/

#include "ia.h"

void		my_putchar_err(char c)
{
  write(2, &c, 1);
}

void		my_putstr_err(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar_err(str[i]);
      i = i + 1;
    }
}
