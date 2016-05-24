/*
** my_putstr.c for my_putstr.c in /home/coulon_b/rendu/Piscine_C_J04
**
** Made by Pierrick Coulon
** Login   <coulon_b@epitech.net>
**
** Started on  Thu Oct  1 19:19:52 2015 Pierrick Coulon
** Last update Tue Feb  9 21:47:33 2016 COULON Pierrick
*/

#include <unistd.h>
#include "../include/allum1.h"

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
