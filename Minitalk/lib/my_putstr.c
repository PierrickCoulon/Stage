/*
** my_putstr.c for my_putstr.c in /home/coulon_b/rendu/Piscine_C_J04
**
** Made by Pierrick Coulon
** Login   <coulon_b@epitech.net>
**
** Started on  Thu Oct  1 19:19:52 2015 Pierrick Coulon
** Last update Mon Feb  8 12:54:44 2016 COULON Pierrick
*/

#include <unistd.h>
#include "../include/my_minitalk.h"

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
