/*
** fill.c for fill.c in /home/coulon_b/Rendu/IA/dante/generateur
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Sun May 22 17:46:03 2016 COULON Pierrick
** Last update Sun May 22 17:47:58 2016 COULON Pierrick
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "get_next_line.h"
#include "ia.h"

void		check_ilot(char **tab)
{
  int		a;
  int		i;

  a = 0;
  i = 0;
  while (tab[a] != NULL)
    {
      while (tab[a][i] != '\n')
        {
          if (tab[a][i] == 'X')
            {
              if (tab[a][i - 1] != '+')
                tab[a][i - 1] = 'X';
              else if (tab[a][i + 1] != '+' && tab[a][i + 1] != '\n')
                tab[a][i + 1] = 'X';
            }
          i = i + 1;
        }
      i = 0;
      a = a + 1;
    }
}

char		**check_solver(char **tab)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (tab[i] != NULL)
    {
      while (tab[i][j] != '\n')
        {
          if (tab[i][j] == '+')
            tab[i][j] = '*';
          else if (tab[i][j] == 'o')
            tab[i][j] = '*';
          j = j + 1;
        }
      j = 0;
      i = i + 1;
    }
  return (tab);
}

char		**fill2(char **tab, t_struct *s, t_gen *g)
{
  if (g->a == (s->height - 1))
    {
      while (g->i != (s->width - 1))
        {
          tab[g->a][g->i] = '+';
          g->i = g->i + 1;
        }
      g->ok = 1;
    }
  if (g->i == (s->width - 1))
    {
      while (g->a != (s->height - 1))
        {
          tab[g->a][g->i] = '+';
          g->a = g->a + 1;
        }
      g->ok = 1;
    }
  g->r = rand() % 2 + 1;
  g->r2 = rand() % 2 + 1;
  return (tab);
}

char		**fill3(t_gen *g, char **tab)
{
  if (g->r == 1 && g->r2 != 1)
    {
      tab[g->a][g->i] = '+';
      g->a = g->a + 1;
    }
  else if (g->r2 == 1 && g->r != 1)
    {
      tab[g->a][g->i] = '+';
      g->i = g->i + 1;
    }
  return (tab);
}

void		fill4(t_gen *g, char **tab, char *check)
{
  while (g->check2[g->i] != 0)
    {
      if (g->check2[g->i] != check[g->i])
        g->ok2 = 1;
      g->i = g->i + 1;
    }
  if (g->ok2 == 0)
    check_ilot(tab);
  tab = check_solver(tab);
  while (tab[g->tmp] != NULL)
    {
      my_putstr_modif(tab[g->tmp]);
      if (tab[g->tmp + 1] != NULL)
        my_putchar('\n');
      g->tmp = g->tmp + 1;
    }
}
