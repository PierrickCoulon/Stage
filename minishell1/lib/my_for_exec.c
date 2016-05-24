/*
** my_for_exec.c for my_for_exec.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Sat Jan 23 01:35:51 2016
** Last update Sun Jan 24 16:49:28 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

int		my_exec_3(t_genv *genv, char *buf, char **str2, char **env)
{
  int		status;

  if (genv->acs == 0)
    {
      genv->t = fork();
      if (genv->t == 0)
	genv->executable = execve(buf, str2, env);
      else
	wait(&status);
      return (0);
    }
  else
    return (1);
}

void		my_exec_2(char *buf, char **str2, t_genv *genv, char *exec)
{
  int		b;

  b = 0;
  buf = getcwd(buf, 4096);
  while (str2[0][genv->a] != '\0')
    {
      exec[b] = str2[0][genv->a];
      b = b + 1;
      genv->a = genv->a + 1;
    }
  buf = my_strcat(buf, exec);
  genv->acs = access(buf, F_OK | X_OK);
}

int		my_executable(char **str2, char **env)
{
  char		*exec;
  char		*buf;
  t_genv	*genv;

  if (!(genv = malloc(sizeof(genv))))
  return (0);
  genv->a = 2;
  if (!(buf = malloc(8096 * sizeof(char))))
    return (1);
  if (!(exec = malloc(8096 * sizeof(char))))
    return (1);
  if (str2[0][0] == '.' && str2[0][1] == '/')
    {
      my_exec_2(buf, str2, genv, exec);
      if (my_exec_3(genv, buf, str2, env) == 0)
	return (0);
      else
	return (1);
    }
  return (1);
}
