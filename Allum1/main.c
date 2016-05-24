/*
** main.c for main.c in /home/coulon-b/rendu/CPE_2015_allum1_bootstrap
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Tue Feb  9 15:00:18 2016 COULON Pierrick
** Last update Fri Feb 26 22:10:36 2016 Pierrick Coulon
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "include/allum1.h"
#include "include/get_next_line.h"

static t_stat *g_sta;

int		modif(t_gnl *gnl, t_allum *a, int tmp)
{
  if (tmp != 0)
    {
      if (modification(gnl, a, g_sta) == 2)
  	return (0);
    }
  return (1);
}

int		modif_ia_and_display(t_gnl *gnl, t_allum *a)
{
  if (modification(gnl, a, g_sta) == 2)
    return (0);
  display(a);
  gnl->line[0] = check_line_ia(a);
  gnl->matches[0] = check_match_ia(gnl, a);
  gnl->line[1] = '\0';
  gnl->matches[1] = '\0';
  my_putstr("\nAI's turn...\n");
  my_putstr("AI removed ");
  my_putstr(gnl->matches);
  my_putstr(" match(es) from line ");
  my_putstr(gnl->line);
  my_putchar('\n');
  return (1);
}

int		allum1_b(t_gnl *gnl, int tmp, t_allum *a)
{
  if (g_sta->turn == 1)
    {
      if (modif_ia_and_display(gnl, a) == 0)
	return (0);
      tmp = tmp + 1;
      g_sta->turn = 0;
    }
  return (1);
}

int		allum1(int tmp, t_allum *a, t_gnl *gnl)
{
  while (1)
    {
      if (g_sta->turn == 0)
	{
	  if (check_tmp(tmp, a) == -1)
	    return (-1);
	  if (modif(gnl, a, tmp) == 0)
	     return (0);
	  display_main(a);
	  gnl->line = check_line_main(gnl, a);
	  if (gnl->line == NULL)
	    return (2);
	  gnl->matches = check_matches_main(gnl, a);
	  if (gnl->matches == NULL || gnl->line == NULL)
	    return (2);
	  tmp = tmp + 1;
	  g_sta->turn = 1;
	}
      if (allum1_b(gnl, tmp, a) == 0)
	return (0);
    }
 }

int		main(void)
{
  t_allum	*a;
  int		tmp;
  pid_t		p;
  t_gnl		*gnl;

  if (!(gnl = malloc(sizeof(gnl))))
    return (-1);
  p = getpid();
  srand(p);
  if (!(g_sta = malloc(sizeof(g_sta))))
    return (-1);
  if (!(a = malloc(sizeof(a))))
    return (-1);
  g_sta->cpt = 0;
  g_sta->cpt2 = 0;
  g_sta->cpt3 = 0;
  g_sta->turn = 0;
  tmp = 0;
  if (allum1(tmp, a, gnl) == 2)
    {
      free(g_sta);
      free(a);
      return (0);
    }
  return (0);
}
