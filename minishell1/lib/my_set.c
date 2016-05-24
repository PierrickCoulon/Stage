/*
** my_set.c for my_set.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Sat Jan 23 01:30:15 2016
** Last update Sun Jan 24 17:10:00 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

int		my_unsetenv(char **str2, char **env)
{
  int		a;

  if (str2[0][0] == 'u' && str2[0][1] == 'n' && str2[0][2] == 's'
      && str2[0][3] == 'e' && str2[0][4] == 't' && str2[0][5] == 'e'
      && str2[0][6] == 'n' && str2[0][7] == 'v'
      && str2[1] != NULL)
    {
      while (env[a] != NULL)
	{
	  if (check_env(str2, env[a]) == 1)
	    {
	      while (env[a + 1] != NULL)
		{
		  if (!(env[a] = malloc(my_strlen(env[a + 1]))))
		    return (1);
		  env[a] = env[a + 1];
		  a = a + 1;
		}
	      env[a] = NULL;
	    }
	  a = a + 1;
	}
      return (0);
    }
  return (1);
}

void		setenv2(int q, int a, char **str2, char **env)
{
  if (q == 0)
    {
      q = 0;
      env[a] = str2[1];
      env[a] = my_strcat_egal(env[a], str2[2]);
    }
  env[a + 1] = NULL;
}

int		setenv3(int q, int a, char **str2, char **env)
{
  if (!(env[a] = malloc(my_strlen(str2[2]) + my_strlen(env[a]))))
    return (1);
  env[a] = str2[1];
  env[a] = my_strcat_egal(env[a], str2[2]);
  q = 1;
  return (q);
}

int		my_setenv(char **str2, char **env)
{
  int		q;
  int		a;

  a = 0;
  q = 0;
  if (str2[0][0] == 's' && str2[0][1] == 'e' && str2[0][2] == 't'
      && str2[0][3] == 'e' && str2[0][4] == 'n' && str2[0][5] == 'v'
      && str2[1] != NULL && str2[2] != NULL && str2[3] != NULL)
    {
      while (env[a] != NULL)
	{
	  if (check_env(str2, env[a]) != 0)
	    q = 1;
	  if (check_env(str2, env[a]) != 0 && my_getnbr(str2[3]) != 0)
	   {
	     if (setenv3(q, a, str2, env) == 1)
	       return (1);
	    }
	  a = a + 1;
	}
      setenv2(q, a, str2, env);
      return (0);
    }
  else
    return (1);
}

int		check_env(char **str2, char *env)
{
  int		i;

  i = 0;
  while (str2[1][i] != '\0')
    {
      if (str2[1][i] != env[i])
	return (0);
      i = i + 1;
    }
  if (env[i] != '=')
    return (0);
  else
    return (1);
}
