/*
** check_line2.c for check_line2.c in /home/coulon-b/rendu/CPE_2015_Allum1/lib
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Wed Feb 17 17:09:47 2016 COULON Pierrick
** Last update Thu Feb 18 19:54:17 2016 COULON Pierrick
*/

#include <stdlib.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_line2(t_gnl *gnl, int i)
{
  if (gnl->line[i] < 49 || gnl->line[i] > 52)
    {
      while (gnl->line[i] != '\0')
	{
	  if (gnl->line[i] < 48 || gnl->line[i] > 57)
	    {
	      if (gnl->line[i] == 32)
		i = i + 1;
	      else
		{
		  my_putstr("Error: invalid input (positive number expected)");
		  i = i + 1;
		  return (-1);
		}
	    }
	  i = i + 1;
	}
      my_putstr("Error: this line is out of range");
      return (-1);
    }
  return (0);
}
