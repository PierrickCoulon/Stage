/*
** my_getnextline.c for my_getnextline.c in /home/coulon-b/rendu/C_PROG_ELEM/CPE_2015_getnextline
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Tue Jan  5 15:31:51 2016
** Last update Sat Jan 23 05:48:35 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

static int	r = 0;
static char	buffer[READ_SIZE];
static int	my_static = 0;

int		my_realloc(char *str)
{
  char		*tmp;
  int		i;
  int		cpt;

  i = 0;
  cpt = 0;
  while (i != READ_SIZE)
    {
      tmp = str;
      i = i + 1;
    }
  if (!(str = malloc(i * sizeof(char) + 1)))
    return (0);
  while (cpt != READ_SIZE)
    {
      str[cpt] = tmp[cpt];
      cpt = cpt + 1;
    }
  return (0);
}

char		*my_get_next_line_2(t_param *prm)
{
  if (buffer[my_static] == '\n')
    {
      my_realloc(prm->str);
      my_static = my_static + 1;
      prm->str[prm->cpt] = '\0';
      return (prm->str);
    }
  else
    {
      my_realloc(prm->str);
      prm->str[prm->cpt] = buffer[my_static];
      prm->cpt = prm->cpt + 1;
      my_static = my_static + 1;
    }
  if (buffer[my_static] == '\n')
    {
      my_realloc(prm->str);
      prm->str[prm->cpt] = '\0';
    }
  return (NULL);
}

void		my_end(t_param *prm)
{
  my_realloc(prm->str);
  my_static = -1;
  prm->str[prm->cpt] = '\0';
}

char		*get_next_line(const int file)
{
  t_param	*prm;

  if(!(prm = malloc(sizeof(prm))))
    return (NULL);
  prm->cpt = 0;
  if (!(prm->str = malloc(READ_SIZE * sizeof(char))))
    return (NULL);
  while (my_static != -1)
    {
      if (my_static == 0 && (r = read(file, buffer, READ_SIZE)) == 0)
      	{
	  my_end(prm);
  	  return (prm->str);
  	}
      else
      	{
  	  while (my_static < r)
	    {
	      if (my_get_next_line_2(prm) == prm->str)
		return (prm->str);
	    }
	  my_static = 0;
	}
    }
  return (NULL);
}
