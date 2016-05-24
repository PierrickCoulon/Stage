/*
** my_strlen.c for my_strlen in /home/pinalo_c/rendu/C_prog_elem/CPE_2015_n4s/CPE_2015_n4s
** 
** Made by Cyril pinalo_c
** Login   <pinalo_c@epitech.net>
** 
** Started on  Wed Apr 27 15:20:03 2016 Cyril pinalo_c
** Last update Wed Apr 27 15:30:36 2016 Cyril pinalo_c
*/

#include "ia.h"

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}
