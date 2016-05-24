/*
1;2802;0c** print_game_board.c for print_game_board.c in /home/coulon-b/rendu/CPE_2015_allum1_bootstrap
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Tue Feb  9 15:00:01 2016 COULON Pierrick
** Last update Sun Feb 21 23:36:39 2016 COULON Pierrick
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		fill(t_allum *a)
{
  int		i;
  int		cpt;

  i = 0;
  cpt = 0;
  while (i < 6)
    {
      if (!(a->str[i] = malloc(sizeof(char) * 9)))
	return (-1);
      i = i + 1;
    }
  while (cpt < 9)
    {
      a->str[0][cpt] = '*';
      a->str[5][cpt] = '*';
      cpt = cpt + 1;
    }
  cpt = 0;
  while (cpt < 6)
    {
      a->str[cpt][0] = '*';
      a->str[cpt][8] = '*';
      cpt = cpt + 1;
    }
  return (0);
}

int		fill2(t_allum *a, int ret, int line, t_temp *b)
{
  while (line <= 4)
    {
      while (b->cpt <= 3 - ret)
	{
	  a->str[line][b->cpt] = ' ';
	  b->cpt = b->cpt + 1;
	}
      while (b->cpt2 <= b->tmp)
	{
	  a->str[line][b->cpt] = '|';
	  b->cpt2 = b->cpt2 + 1;
	  b->cpt = b->cpt + 1;
	}
      while (b->cpt <= 7)
	{
	  a->str[line][b->cpt] = ' ';
	  b->cpt = b->cpt + 1;
	}
      b->cpt2 = 1;
      b->tmp = b->tmp + 2;
      ret = ret + 1;
      line = line + 1;
      b->cpt = 1;
    }
  return (0);
}

int		print_game_board(t_allum *a)
{
  int			line;
  int			ret;
  t_temp		*b;

  if (!(a->str = malloc(sizeof(char *) * 6)))
    return (-1);
  if (!(b = malloc(sizeof(b))))
    return (-1);
  line = 1;
  ret = 0;
  b->tmp = 1;
  b->cpt = 1;
  b->cpt2 =1;
  fill(a);
  fill2(a, ret, line, b);
  return (0);
}
