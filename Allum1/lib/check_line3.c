/*
** chechk_line3.c for check_line3.c in /home/coulon-b/rendu/CPE_2015_Allum1/lib
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Wed Feb 17 17:10:23 2016 COULON Pierrick
** Last update Thu Feb 18 19:54:26 2016 COULON Pierrick
*/

#include <stdlib.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_line3(t_allum *a, t_gnl *gnl)
{
  int		cpt2;
  int		cpt;

  cpt2 = 1;
  cpt = 0;
  while (cpt2 <= 8)
    {
      if (a->str[gnl->line[0] - 48][cpt2] == '|')
	cpt = 1;
      cpt2 = cpt2 + 1;
    }
  if (cpt == 0)
    {
      my_putstr("Error: this line is empty");
      return (-1);
    }
  return (0);
}
