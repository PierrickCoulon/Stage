/*
** write_gnl.c for write_gnl.c in /home/coulon-b/rendu/CPE_2015_Allum1
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Wed Feb 17 16:57:38 2016 COULON Pierrick
** Last update Sun Feb 21 23:27:36 2016 COULON Pierrick
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

void		display_remov(t_gnl *gnl)
{
  my_putstr("Player removed ");
  my_putstr(gnl->matches);
  my_putstr(" match(es) from line ");
  my_putstr(gnl->line);
  my_putchar('\n');
}

char		*check_inf(t_gnl *gnl, t_allum *a)
{
  my_putstr("\nLine: ");
  gnl->line = get_next_line(0);
  if (gnl->line == NULL)
    {
      gnl->line = 0;
      return (NULL);
    }
  while (check_line(gnl, a) == -1)
    {
      my_putstr("\nLine: ");
      gnl->line = get_next_line(0);
      if (gnl->line == NULL)
	{
	  gnl->line = 0;
	  return (NULL);
	}
    }
  if (gnl->line == NULL)
    {
      gnl->line = 0;
      return (NULL);
    }
  return (gnl->line);
}

char		*check_matches_main(t_gnl *gnl, t_allum *a)
{
  gnl->matches = get_next_line(0);
  if (gnl->matches == NULL)
    {
      gnl->matches = 0;
      return (NULL);
    }
  while (check_matches(gnl, a) == -1)
    {
      if (check_inf(gnl, a) == NULL)
      	return (NULL);
      my_putstr("Matches: ");
      gnl->matches = get_next_line(0);
      if (gnl->matches == NULL)
	{
	  gnl->matches = 0;
	  return (NULL);
	}
    }
  display_remov(gnl);
  return (gnl->matches);
}

char		*check_line_main(t_gnl *gnl, t_allum *a)
{
  gnl->line = get_next_line(0);
  if (gnl->line == NULL)
    {
      gnl->line = 0;
      return (NULL);
    }
  while (check_line(gnl, a) == -1)
    {
      my_putstr("\nLine: ");
      gnl->line = get_next_line(0);
      if (gnl->line == NULL)
	{
	  gnl->line = 0;
	  return (NULL);
	}
    }
  my_putstr("Matches: ");
  return (gnl->line);
}
