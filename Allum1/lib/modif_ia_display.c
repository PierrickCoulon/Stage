/*
** modif_ia_display.c for modif_ia_display.c in /home/coulon-b/rendu/CPE_2015_Allum1
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Wed Feb 17 17:02:19 2016 COULON Pierrick
** Last update Sat Feb 20 16:51:22 2016 COULON Pierrick
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

void		display_main(t_allum *a)
{
  display(a);
  my_putchar('\n');
  my_putstr("Your turn:");
  my_putchar('\n');
  my_putstr("Line: ");
}

int		check_tmp(int tmp, t_allum *a)
{
  if (tmp == 0)
    {
      if (print_game_board(a) == -1)
	return (-1);
    }
  return (0);
}
