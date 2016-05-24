/*
** my_putchar.c for my_putchar.c in /home/coulon_b/Rendu/IA/dante
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Mon May  2 13:00:09 2016 COULON Pierrick
** Last update Mon May  2 13:01:12 2016 COULON Pierrick
*/

#include <unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
