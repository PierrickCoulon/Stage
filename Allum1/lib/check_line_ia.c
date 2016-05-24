/*
1;2802;0c1;2802;0c1;2802;0c** check_match_ia.c for check_match_ia.c in /home/coulon-b/rendu/CPE_2015_Allum1
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Mon Feb 15 17:50:43 2016 COULON Pierrick
** Last update Tue Feb 16 17:35:52 2016 COULON Pierrick
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_line_ia(t_allum *a)
{
  int		cpt;
  int		cpt2;
  int		cpt3;
  int		i;

  cpt = 1;
  cpt2 = 0;
  cpt3 = 1;
  i = rand() % 4 + 1;
  while (cpt3 == 1)
    {
      cpt = 1;
      while (cpt <= 7)
	{
	  if (a->str[i][cpt] == '|')
	    cpt2 = cpt2 + 1;
	  cpt = cpt + 1;
	}
      if (cpt2 == 0)
	i = rand() % 4 + 1;
      else
	cpt3 = 0;
    }
  return (i + 48);
}
