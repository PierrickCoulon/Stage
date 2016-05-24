/*
** check_pips.c for check_pips.c in /home/coulon-b/rendu/CPE_2015_Allum1
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Mon Feb 15 16:47:08 2016 COULON Pierrick
** Last update Thu Feb 18 20:08:16 2016 COULON Pierrick
*/

#include <stdlib.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_pips(t_allum *a, t_gnl *gnl)
{
  int		cpt;
  int		cpt2;
  int		cpt3;

  cpt3 = 0;
  cpt2 = 0;
  cpt = my_getnbr(gnl->line);
  my_put_nbr(cpt);
  while (cpt2 <= 8)
    {
      if (a->str[cpt][cpt2] == '|')
	cpt3 = cpt3 + 1;
      cpt2 = cpt2 + 1;
    }
  if (cpt3 == 0)
    {
      my_putstr("Error: not enough matches on this line");
      return (-1);
    }
  return (0);
}
