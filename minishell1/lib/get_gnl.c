/*
** get_gnl.c for get_gnl.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Sat Jan 23 01:10:40 2016
** Last update Sun Jan 24 16:46:57 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

void		my_str_to_4(char *str, t_genv *genv)
{
  if (str[genv->i] == ' ')
    genv->cpt = genv->cpt + 1;
  genv->i = genv->i + 1;
}

int		my_str_to_wordtab(char *str, char **env)
{
  t_genv	*genv;
  char		**str2;

  if (!(genv = malloc(sizeof(genv))))
    return (0);
  genv->i = 0;
  genv->a = 0;
  genv->cpt = 1;
  while (str[genv->i] != '\0')
    my_str_to_4(str, genv);
  genv->i = 0;
  while (str[genv->i] != '\0')
    genv->i = genv->i + 1;
  if (!(str2 = malloc(genv->cpt * sizeof(char *) + 1)))
    return (0);
  while (genv->a != genv->cpt)
    {
      if (!(str2[genv->a] = malloc(genv->i * sizeof(char))))
	return (0);
      genv->a = genv->a + 1;
    }
  if (my_str_to_wordtab2(str2, str, env) == 2)
    return (2);
  return (1);
}

int		my_str_to_wordtab2(char **str2, char *str, char **env)
{
  int		i;
  int		a;
  int		cpt;

  i = 0;
  a = 0;
  cpt = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	{
	  str2[a][cpt] = '\0';
	  a = a + 1;
	  i = i + 1;
	  cpt = 0;
	}
      str2[a][cpt] = str[i];
      i = i + 1;
      cpt = cpt + 1;
    }
  str2[a + 1] = NULL;
  if ((my_getenv(env, str2)) == 2)
    return (2);
  return (1);
}
