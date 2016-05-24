/*
** my_getnextline.c for my_getnextline.c in /home/coulon-b/rendu/C_PROG_ELEM/CPE_2015_getnextline
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Tue Jan  5 15:31:51 2016
** Last update Mon May 23 18:16:52 2016 Pierrick COULON
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"

char			*my_realloc(char *str, int size)
{
  int			i;
  int			cpt;
  char			*tmp;

  i = 0;
  cpt = 0;
  while (str[cpt] != 0)
    cpt = cpt + 1;
  if (!(tmp = malloc(size + cpt)))
    return (NULL);
  while (str[i] != 0)
    {
      tmp[i] = str[i];
      i = i + 1;;
    }
  tmp[i] = 0;
  free(str);
  return (tmp);
}

char		*my_get_next_line_2(t_param *prm)
{
  if (g_buffer[g_my_static] == '\n')
    {
      prm->str = my_realloc(prm->str, READ_SIZE);
      g_my_static = g_my_static + 1;
      prm->str[prm->cpt] = '\0';
      return (prm->str);
    }
  else
    {
      prm->str = my_realloc(prm->str, READ_SIZE);
      prm->str[prm->cpt] = g_buffer[g_my_static];
      prm->cpt = prm->cpt + 1;
      g_my_static = g_my_static + 1;
    }
  if (g_buffer[g_my_static] == '\n')
    {
      prm->str = my_realloc(prm->str, READ_SIZE);
      prm->str[prm->cpt] = '\0';
    }
  return (NULL);
}

void		my_end(t_param *prm)
{
  prm->str = my_realloc(prm->str, READ_SIZE);
  g_my_static = -1;
  prm->str[prm->cpt] = '\0';
}

char		*get_next_line_3(t_param *prm)
{
  while (g_my_static < g_r)
    {
      if (my_get_next_line_2(prm) == prm->str)
	return (prm->str);
    }
  g_my_static = 0;
  return (NULL);
}

char		*get_next_line(const int file)
{
  t_param	*prm;

  if(!(prm = malloc(sizeof(prm))))
    return (NULL);
  prm->cpt = 0;
  if (!(prm->str = malloc(READ_SIZE * sizeof(char))))
    return (NULL);
  while (g_my_static != -1)
    {
      if (g_my_static == 0 && (g_r = read(file, g_buffer, READ_SIZE)) == 0)
	{
	  if (g_buffer[0] == '\0')
	    return (NULL);
	  my_end(prm);
	  return (prm->str);
	}
      else
	{
	  if (get_next_line_3(prm) == prm->str)
	    return (prm->str);
	}
    }
  return (NULL);
}
