/*
** check_who_win.c for check_who_win.c in /home/coulon-b/rendu/CPE_2015_Allum1/lib
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Wed Feb 17 17:14:42 2016 COULON Pierrick
** Last update Sat Feb 20 17:16:59 2016 COULON Pierrick
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_who_win(t_allum *a, t_stat *sta)
{
  int		haut;
  int		charac;

  haut = 0;
  charac = 0;
  while (a->str[haut][charac] != '|')
    {
      if (haut == 5 && charac == 8)
	{
	  display(a);
	  if (sta->turn == 0)
	    my_putstr("I lost.. snif.. but I'll get you next time!!");
	  else
	    my_putstr("You lost, too bad..");
	  my_putchar('\n');
	  return (2);
	}
      if (charac == 8)
	{
	  charac = 0;
	  haut = haut + 1;
	}
      charac = charac + 1;
    }
  return (0);
}
