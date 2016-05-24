/*
1;2802;0c** check_match_ia.c for check_match_ia.c in /home/coulon-b/rendu/CPE_2015_Allum1
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Mon Feb 15 17:59:03 2016 COULON Pierrick
** Last update Thu Feb 18 20:05:34 2016 COULON Pierrick
*/

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_match_ia(t_gnl *gnl, t_allum *a)
{
  int		match;
  int		cpt;
  int		cpt2;

  match = 0;
  cpt = 1;
  cpt2 = 0;
  while (a->str[gnl->line[0] - 48][cpt] != '*')
    {
      if (a->str[gnl->line[0] - 48][cpt] == '|')
	cpt2 = cpt2 + 1;
      cpt = cpt + 1;
    }
  match = rand() % cpt2 + 1;
  return (match + 48);
}
