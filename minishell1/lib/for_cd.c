/*
** for_cd.c for for_cd.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
** 
** Made by 
** Login   <coulon-b@epitech.net>
** 
** Started on  Sat Jan 23 01:38:39 2016 
** Last update Sun Jan 24 17:04:29 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

int		check_error_cd(char **str2)
{
  int		acs;

  acs = access(str2[1], F_OK | X_OK);
  if (acs == - 1)
    {
      my_putstr("Doesn't exist\n");
      return (0);
    }
  return (1);
}

void		found_str3(char **env, int i)
{
  while (env[i] != NULL)
    {
      my_putstr(env[i]);
      my_putchar('\n');
      i = i + 1;
    }
}

int		found_str2(char **str2, char **env)
{
  int		i;

  i = 0;
  if (str2[0][0] == 'c' && str2[0][1] == 'd')
    {
      if (str2[1] != NULL)
	{
	  if (check_error_cd(str2) == 0)
	    return (0);
	  chdir(str2[1]);
	}
      else if (str2[0][2] == '.' && str2[0][3] == '.' && str2[1] != NULL)
	chdir(str2[1]);
      else
  	chdir("/");
      return (0);
    }
  else if (str2[0][0] == 'e' && str2[0][1] == 'n' && str2[0][2] == 'v')
    {
      found_str3(env, i);
      return (0);
    }
  return (1);
}
