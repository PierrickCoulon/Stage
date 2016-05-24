/*
** main.c for main.c in /home/coulon_b/Rendu/IA/dante
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Mon May  2 12:40:47 2016 COULON Pierrick
** Last update Sun May 22 17:47:22 2016 COULON Pierrick
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

/* void		check_ilot(char **tab) */
/* { */
/*   int		a; */
/*   int		i; */

/*   a = 0; */
/*   i = 0; */
/*   while (tab[a] != NULL) */
/*     { */
/*       while (tab[a][i] != '\n') */
/* 	{ */
/* 	  if (tab[a][i] == 'X') */
/* 	    { */
/* 	      if (tab[a][i - 1] != '+') */
/* 		tab[a][i - 1] = 'X'; */
/* 	      else if (tab[a][i + 1] != '+' && tab[a][i + 1] != '\n') */
/* 		tab[a][i + 1] = 'X'; */
/* 	    } */
/* 	  i = i + 1; */
/* 	} */
/*       i = 0; */
/*       a = a + 1; */
/*     } */
/* } */

/* char		**check_solver(char **tab) */
/* { */
/*   int		i; */
/*   int		j; */

/*   i = 0; */
/*   j = 0; */
/*   while (tab[i] != NULL) */
/*     { */
/*       while (tab[i][j] != '\n') */
/* 	{ */
/* 	  if (tab[i][j] == '+') */
/* 	    tab[i][j] = '*'; */
/* 	  else if (tab[i][j] == 'o') */
/* 	    tab[i][j] = '*'; */
/* 	  j = j + 1; */
/* 	} */
/*       j = 0; */
/*       i = i + 1; */
/*     } */
/*   return (tab); */
/* } */

/* char		**fill2(char **tab, t_struct *s, t_gen *g) */
/* { */
/*   if (g->a == (s->height - 1)) */
/*     { */
/*       while (g->i != (s->width - 1)) */
/* 	{ */
/* 	  tab[g->a][g->i] = '+'; */
/* 	  g->i = g->i + 1; */
/* 	} */
/*       g->ok = 1; */
/*     } */
/*   if (g->i == (s->width - 1)) */
/*     { */
/*       while (g->a != (s->height - 1)) */
/* 	{ */
/* 	  tab[g->a][g->i] = '+'; */
/* 	  g->a = g->a + 1; */
/* 	} */
/*       g->ok = 1; */
/*     } */
/*   g->r = rand() % 2 + 1; */
/*   g->r2 = rand() % 2 + 1; */
/*   return (tab); */
/* } */

/* char		**fill3(t_gen *g, char **tab) */
/* { */
/*   if (g->r == 1 && g->r2 != 1) */
/*     { */
/*       tab[g->a][g->i] = '+'; */
/*       g->a = g->a + 1; */
/*     } */
/*   else if (g->r2 == 1 && g->r != 1) */
/*     { */
/*       tab[g->a][g->i] = '+'; */
/*       g->i = g->i + 1; */
/*     } */
/*   return (tab); */
/* } */

/* void		fill4(t_gen *g, char **tab, char *check) */
/* { */
/*   while (g->check2[g->i] != 0) */
/*     { */
/*       if (g->check2[g->i] != check[g->i]) */
/* 	g->ok2 = 1; */
/*       g->i = g->i + 1; */
/*     } */
/*   if (g->ok2 == 0) */
/*     check_ilot(tab); */
/*   tab = check_solver(tab); */
/*   while (tab[g->tmp] != NULL) */
/*     { */
/*       my_putstr_modif(tab[g->tmp]); */
/*       if (tab[g->tmp + 1] != NULL) */
/* 	my_putchar('\n'); */
/*       g->tmp = g->tmp + 1; */
/*     } */
/* } */

int		path(char **tab, t_struct *s, char *check)
{
  t_gen		*g;

  if (!(g = malloc(sizeof(g))))
    return (-1);
  g->ok = 0;
  g->ok2 = 0;
  g->tmp = 0;
  g->i = 1;
  g->a = 0;
  g->check2 = "[parfait]";
  while (g->ok != 1)
    {
      tab = fill2(tab, s, g);
      tab = fill3(g, tab);
    }
  g->i = 0;
  fill4(g, tab, check);
  return (0);
}

char		**fill(t_struct *s, char **tab, int i)
{
  int		a;
  int		r;

  r = 0;
  a = 0;
  while (a != s->height)
    {
      tab[0][0] = '+';
      while (i != s->width)
	{
	  r = rand() % 2 + 1;
	  if (r == 1)
	    tab[a][i] = 'X';
	  else
	    tab[a][i] = 'o';
	  i = i + 1;
	}
      tab[a][i] = '\n';
      i = 0;
      a = a + 1;
    }
  tab[s->height - 1][s->width - 1] = '+';
  tab[a] = NULL;
  return (tab);
}

char		**generator(t_struct *s)
{
  char		**tab;
  int		i;

  i = 0;
  if (!(tab = malloc(sizeof(char *) * (s->height + 1))))
    return (NULL);
  while (i != s->height)
    {
      if (!(tab[i] = malloc(sizeof(char) * s->width + 1)))
	return (NULL);
      i = i + 1;
    }
  i = 0;
  tab = fill(s, tab, i);
  return (tab);
}

void		recup(char *l, char *h, t_struct *s)
{
  s->width = my_getnbr(l);
  s->height = my_getnbr(h);
  s->width = s->width;
  s->height= s->height;
}

int		main(int ac, char **av)
{
  t_struct	*s;
  char		**tab;

  srand(time(NULL));
  if (!(s = malloc(sizeof(s))))
    return (-1);
  if (ac < 4 || ac > 4)
    return (0);
  recup(av[1], av[2], s);
  tab = generator(s);
  path(tab, s, av[3]);
  return (0);
}
