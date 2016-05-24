/*
** trash_gnl.c for trash_gnl in /home/pinalo_c/rendu/C_prog_elem/CPE_2015_n4s/CPE_2015_n4s/srcs
** 
** Made by Cyril pinalo_c
** Login   <pinalo_c@epitech.net>
** 
** Started on  Fri Apr 29 13:20:32 2016 Cyril pinalo_c
** Last update Fri Apr 29 13:23:05 2016 Cyril pinalo_c
*/

#include "ia.h"

void		trash_gnl(char *str)
{
  char		*trash;

  my_putstr(str);
  trash = get_next_line(0);
  trash = trash;
}
