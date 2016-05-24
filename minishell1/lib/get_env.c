/*
** get_env.c for get_env.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Sat Jan 23 01:17:21 2016
** Last update Sun Jan 24 16:47:28 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

void		my_getenv2(char **env, t_genv *genv)
{
  genv->path[genv->cpt2] = env[genv->i][genv->cpt];
  genv->cpt = genv->cpt + 1;
  genv->cpt2 = genv->cpt2 + 1;
}

void		my_getenv3(char *path, t_genv *genv)
{
  if (path[genv->i] == ':')
    genv->cpt = genv->cpt + 1;
  genv->i = genv->i + 1;
}

int		my_getenv(char **env, char **str2)
{
  t_genv	*genv;

  if (!(genv = malloc(sizeof(genv))))
    return (0);
  genv->cpt = 5;
  genv->cpt2 = 0;
  genv->i = 0;
  if (!(genv->path = malloc(8096 * sizeof(char))))
    return (0);
  while (env[genv->i] != NULL)
    {
      if (env[genv->i][0] == 'P' && env[genv->i][1] == 'A'
	  && env[genv->i][2] == 'T' && env[genv->i][3] == 'H')
	{
	  while (env[genv->i][genv->cpt] != '\0')
	    my_getenv2(env, genv);
	  genv->path[genv->cpt2] = '\0';
	}
      genv->i = genv->i + 1;
    }
  if (my_wordtab_for_env(genv->path, str2, env) == 2)
    return (2);
  return (1);
}

int		my_wordtab_for_env(char *path, char **str2, char **env)
{
  t_genv	*genv;

  if (!(genv = malloc(sizeof(genv))))
    return (0);
  genv->i = 0;
  genv->a = 0;
  genv->cpt = 1;
  while (path[genv->i] != '\0')
    my_getenv3(path, genv);
  genv->i = 0;
  while (path[genv->i] != '\0')
    genv->i = genv->i + 1;
  if(!(genv->path2 = malloc(genv->cpt * sizeof(char *))))
    return (0);
  while (genv->a != genv->cpt)
    {
      if(!(genv->path2[genv->a] = malloc(genv->i * sizeof(char))))
	return (0);
      genv->a = genv->a + 1;
    }
  if (my_wordtab_for_env2(genv->path2, path, str2, env) == 2)
    return (2);
  return (1);
}

int		my_wordtab_for_env2(char **path2, char *path,
				    char **str2, char **env)
{
  t_genv	*genv;

  if (!(genv = malloc(sizeof(genv))))
    return (1);
  genv->i = 0;
  genv->a = 0;
  genv->cpt = 0;
  while (path[genv->i] != '\0')
    {
      if (path[genv->i] == ':')
	{
	  genv->a = genv->a + 1;
	  genv->i = genv->i + 1;
	  genv->cpt = 0;
	}
      path2[genv->a][genv->cpt] = path[genv->i];
      genv->i = genv->i + 1;
      genv->cpt = genv->cpt + 1;
    }
  path2[genv->a] = NULL;
  if (my_elem(path2, str2, env) == 2)
    return (2);
  return (1);
}
