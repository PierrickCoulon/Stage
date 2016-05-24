/*
** my_putchar_modif.c for my_putchar_modif.c in /home/coulon_b/Rendu/IA/dante/profondeur
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Sun May 22 16:55:25 2016 COULON Pierrick
** Last update Sun May 22 16:57:42 2016 COULON Pierrick
*/

#include <unistd.h>

int		my_putchar_modif(char c)
{
  if (c == '\n')
    return (0);
  write(1, &c, 1);
  return (1);
}
