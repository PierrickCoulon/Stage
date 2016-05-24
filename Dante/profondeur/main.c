/*
** main.c for main.c in /home/coulon_b/Rendu/IA/dante
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Mon May  2 12:40:47 2016 COULON Pierrick
** Last update Mon May 23 18:32:24 2016 Pierrick COULON
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"
#include "ia.h"

void		coord(t_struct *s)
{
  s->x_max = 0;
  s->y_max = 0;
  while (s->tab[s->y_max] != NULL)
    {
      while (s->tab[s->y_max][s->x_max] != '\n')
	s->x_max = s->x_max + 1;
      if (s->tab[s->y_max + 1] != NULL)
	s->x_max = 0;
      s->y_max = s->y_max + 1;
    }
  s->max = s->x_max * s->y_max;
}

int		check_path(t_struct *s)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (s->tab[i] != NULL)
    {
      while (s->tab[i][j] != 0)
	{
	  if (s->tab[i][j] == '*')
	    return (1);
	  j++;
	}
      j = 0;
      i++;
    }
  return (0);
}

int		recurs(t_struct *s, int x, int y)
{
  static int	ok = 0;

  if (ok != 1)
    {
      s->tab[y][x] = 'A';
      if (x == (s->x_max - 1) && y == s->y_max - 1)
	{
	  ok = 1;
	  recurs(s, x, y);
	}
      if (s->tab[y][x + 1] == '*' && ok == 0)
	recurs(s, x + 1, y);
      if (y != (s->y_max - 1) && s->tab[y + 1][x] == '*' && ok == 0)
	recurs(s, x, y + 1);
      if (y != 0 && s->tab[y - 1][x] == '*' && ok == 0)
	recurs(s, x, y - 1);
      if (x != 0 && s->tab[y][x - 1] == '*' && ok == 0)
	recurs(s, x - 1, y);
    }
  if (ok == 1)
    {
      s->tab[y][x] = 'o';
      return (0);
    }
  return (1);
}

void		solver(t_struct *s)
{
  int		x;
  int		y;
  int		j;
  int		i;

  j = 0;
  i = 0;
  x = 0;
  y = 0;
  recurs(s, x, y);
  while (s->tab[i] != NULL)
    {
      while (s->tab[i][j] != 0)
	{
	  if (s->tab[i][j] == 'A')
	    s->tab[i][j] = '*';
	  my_putchar_modif(s->tab[i][j]);
	  j++;
	}
      if (s->tab[i + 1] != NULL)
	my_putchar('\n');
      j = 0;
      i++;
    }
  i = 0;
}

int		main(int ac, char **av)
{
  int		o;
  char		*str;
  char		*tmp;
  t_struct	*s;
  int		ok;

  ac = 1;
  if (!(s = malloc(sizeof(s))))
    return (-1);
  ok = 0;
  o = open(av[1], O_RDONLY);
  while ((str = get_next_line(o)) != NULL)
    {
      if (ok == 1)
	tmp = my_merge(tmp, str);
      else
	{
	  tmp = my_strdup(str);
	  ok = 1;
	}
    }
  if ((s->tab = str_to_word_tab(tmp)) == NULL)
    return (-1);
  coord(s);
  solver(s);
  return (0);
}
