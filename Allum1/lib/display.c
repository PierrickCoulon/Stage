/*
** display.c for display.c in /home/coulon-b/rendu/CPE_2015_Allum1
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Thu Feb 11 18:08:38 2016 COULON Pierrick
** Last update Sat Feb 20 17:16:11 2016 COULON Pierrick
*/

#include "../include/allum1.h"
#include "../include/get_next_line.h"

void		display(t_allum *a)
{
  my_putstr(a->str[0]);
  my_putchar('\n');
  my_putstr(a->str[1]);
  my_putchar('\n');
  my_putstr(a->str[2]);
  my_putchar('\n');
  my_putstr(a->str[3]);
  my_putchar('\n');
  my_putstr(a->str[4]);
  my_putchar('\n');
  my_putstr(a->str[5]);
  my_putchar('\n');
}
