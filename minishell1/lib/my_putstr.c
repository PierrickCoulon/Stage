/*
** my_putstr.c for my_putstr.c in /home/coulon_b/rendu/Piscine_C_J04
**
** Made by Pierrick Coulon
** Login   <coulon_b@epitech.net>
**
** Started on  Thu Oct  1 19:19:52 2015 Pierrick Coulon
** Last update Sat Jan 23 05:50:42 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
