/*
** use_ac_av.c for use_ac_av.c in /home/coulon-b/rendu/TESTDOSSIER/PSU_2015_minishell1/lib
** 
** Made by 
** Login   <coulon-b@epitech.net>
** 
** Started on  Sun Jan 24 16:38:09 2016 
** Last update Sun Jan 24 16:38:41 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

void		use_argc_argv(int ac, char **av)
{
  int		i;

  i = 0;
  ac = 3;
  while (i != ac)
    {
      av[i] = av[i];
      i = i + 1;
    }
}
