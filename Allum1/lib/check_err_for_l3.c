/*
** check_err_for_l3.c for check_err_for_l3.c in /home/coulon-b/rendu/CPE_2015_Allum1/lib
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Wed Feb 17 17:23:55 2016 COULON Pierrick
** Last update Thu Feb 18 19:19:49 2016 COULON Pierrick
*/

#include <stdlib.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_err_for_l_3(t_allum *a, t_gnl *gnl)
{
  int		cpt;
  int		cpt2;

  cpt = 0;
  cpt2 = 1;
  while (a->str[3][cpt2] != '*')
    {
      if (a->str[3][cpt2] == '|')
	cpt = cpt + 1;
      cpt2 = cpt2 + 1;
    }
  if (gnl->matches[0] - 48 > cpt && gnl->matches[0] != '0'
      && gnl->matches[0] >= 49 && gnl->matches[0] <= 53)
    {
      my_putstr("Error: not enough matches on this line");
      return (-1);
    }
  if (gnl->matches[0] == '0' && gnl->matches[1] == 0)
    {
      my_putstr("Error: you have to remove at least one match");
      return (-1);
    }
  return (0);
}

int		check_err_for_l_3_b(t_gnl *gnl, int i)
{
  if (gnl->matches[i] < 48 || gnl->matches[i] > 57)
    {
      my_putstr("Error: invalid input (positive number expected)");
      return (-1);
    }
  else if (gnl->matches[i + 1] != 0)
    {
      while (gnl->matches[i] != '\0')
	{
	  if (gnl->matches[i] > 57 || gnl->matches[i] < 48)
	    {
	      my_putstr("Error: invalid input (positive number expected)");
	      return (-1);
	    }
	  i = i + 1;
	}
      my_putstr("Error: not enough matches on this line");
      return (-1);
    }
  else if (gnl->matches[0] > '5' && gnl->matches[1] == 0)
    {
      my_putstr("Error: not enough matches on this line");
      return (-1);
    }
  return (0);
}
