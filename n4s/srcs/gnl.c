/*
** gnl.c for gnl in /home/pinalo_c/rendu/C_prog_elem/CPE_2015_n4s/CPE_2015_n4s/srcs
** 
** Made by Cyril pinalo_c
** Login   <pinalo_c@epitech.net>
** 
** Started on  Fri Apr 29 13:25:25 2016 Cyril pinalo_c
** Last update Fri Apr 29 13:27:28 2016 Cyril pinalo_c
*/

#include "ia.h"

char		*gnl(char *str)
{
  char		*ret;

  my_putstr(str);
  ret = get_next_line(0);
  return (ret);
}
