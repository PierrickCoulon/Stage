/*
** core.c for core.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Sat Jan 23 01:26:36 2016
** Last update Sun Jan 24 16:41:23 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

int		my_elem2(char **path2, char**str2, char **env, t_par *par)
{
  int		status;

  while (par->acs == -1 && path2[par->i] != NULL)
    {
      par->elem = path2[par->i];
      par->elem = my_strcat(par->elem, str2[0]);
      par->acs = access(par->elem, F_OK | X_OK);
      par->i = par->i + 1;
    }
  if (par->acs == -1)
    {
      write(2, "Error doesn't exist.\n", 22);
      return (0);
    }
  par->p = fork();
  if (par->p == 0)
    par->exec = execve(par->elem, str2, env);
  else
    wait(&status);
  return (1);
}

int		my_elem(char **path2, char **str2, char **env)
{
  t_par		*par;

  if (!(par = malloc(sizeof(par))))
    return (1);
  par->a = 0;
  par->i = 0;
  par->acs = -1;
  par->elem = malloc(8096 * sizeof(char));
  if (my_exit2(str2) == 2)
    return (2);
  if (found_str2(str2, env) == 0)
    return (0);
  if (my_setenv(str2, env) == 0)
    return (0);
  if (my_unsetenv(str2, env) == 0)
    return (0);
  if (my_executable(str2, env) == 0)
    return (0);
  my_elem2(path2, str2, env, par);
  return (3);
}
