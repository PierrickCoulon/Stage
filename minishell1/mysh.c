/*
** mysh.c for mysh.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Wed Jan 20 21:36:45 2016
** Last update Sun Jan 24 16:39:53 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

int		main(int ac, char **av, char **env)
{
  char		*str;
  char		**env_copy;

  use_argc_argv(ac, av);
  if (env[0] == NULL)
    return (0);
  env_copy = env;
  str = "clear";
  my_str_to_wordtab(str, env);
  while (1)
    {
      my_putstr("$>");
      str = get_next_line(0);
      if (str == NULL)
	return (0);
      if (my_str_to_wordtab(str, env_copy) == 2)
	return (0);
      free(str);
    }
  return (0);
}
