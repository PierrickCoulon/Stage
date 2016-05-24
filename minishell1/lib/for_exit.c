/*
** for_exit.c for for_exit.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Sat Jan 23 01:40:43 2016
** Last update Sun Jan 24 16:41:51 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

int		my_exit2(char **str2)
{
  if (str2[0][0] == 'e' && str2[0][1] == 'x'
      && str2[0][2] == 'i' && str2[0][3] == 't')
    return (2);
  return (1);
}
