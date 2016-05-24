/*
** modification.c for modification.c in /home/coulon-b/rendu/CPE_2015_Allum1
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Thu Feb 11 18:18:55 2016 COULON Pierrick
** Last update Sat Feb 20 23:51:18 2016 COULON Pierrick
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		modif_line_1(t_gnl *gnl, t_allum *a)
{
  if (gnl->line[0] == '1' && gnl->matches[0] == '1')
    {
      a->str[1][4] = ' ';
      gnl->matches = gnl->matches;
    }
  return (0);
}

int		modif_line_2(t_gnl *gnl, t_allum *a, t_stat *sta)
{
  int		i;

  i = 0;
  sta->cpt = 8;
  if (gnl->line[0] == '2' && gnl->matches[0] > '0' && gnl->matches[0] < '4')
    {
      while (a->str[2][sta->cpt] != '|')
	{
  	  if (sta->cpt < 1)
  	    return (0);
  	  sta->cpt = sta->cpt - 1;
  	}
      while (i < my_getnbr(gnl->matches))
  	{
  	  a->str[2][sta->cpt] = ' ';
  	  sta->cpt = sta->cpt - 1;
  	  i = i + 1;
  	}
    }
  sta->cpt = 8;
  return (1);
}

int		modif_line_3(t_gnl *gnl, t_allum *a, t_stat *sta)
{
  int		i;

  i = 0;
  sta->cpt2 = 8;
  if (gnl->line[0] == '3' && gnl->matches[0] > '0' && gnl->matches[0] < '6')
    {
      while (a->str[3][sta->cpt2] != '|')
	{
	  if (sta->cpt2 < 1)
	    return (0);
	  sta->cpt2 = sta->cpt2 - 1;
	}
      while (i < my_getnbr(gnl->matches))
	{
	  a->str[3][sta->cpt2] = ' ';
	  sta->cpt2 = sta->cpt2 - 1;
	  i = i + 1;
	}
    }
  sta->cpt2 = 8;
  return (1);
}

int		modif_line_4(t_gnl *gnl, t_allum *a, t_stat *sta)
{
  int		i;

  i = 0;
  sta->cpt3 = 8;
  if (gnl->line[0] == '4' && gnl->matches[0] > '0' && gnl->matches[0] < '8')
    {
      while (a->str[4][sta->cpt3] != '|')
	{
	  if (sta->cpt3 < 1)
	    return (0);
	  sta->cpt3 = sta->cpt3 - 1;
	}
      while (i < my_getnbr(gnl->matches))
	{
	  a->str[4][sta->cpt3] = ' ';
	  sta->cpt3 = sta->cpt3 - 1;
	  i = i + 1;
	}
    }
  sta->cpt3 = 8;
  return (1);
}

int		modification(t_gnl *gnl, t_allum *a, t_stat *sta)
{
  modif_line_1(gnl, a);
  if (modif_line_2(gnl, a, sta) == 0)
    return (0);
  else if (modif_line_3(gnl, a, sta) == 0)
    return (0);
  else if (modif_line_4(gnl, a, sta) == 0)
    return (0);
  else if (check_who_win(a, sta) == 2)
    return (2);
  return (0);
}
