/*
** check_line.c for check_line.c in /home/coulon-b/rendu/CPE_2015_Allum1
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Thu Feb 11 18:12:28 2016 COULON Pierrick
** Last update Sat Feb 20 22:25:44 2016 Pierrick Coulon
*/

#include <stdlib.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_line_b(t_gnl *gnl)
{
  int		i;

  i = 0;
  if (gnl->line[0] == 0)
    {
      my_putstr("Error: invalid input (positive number expected)");
      return (-1);
    }
  return (i);
}

int		check_line_c(t_gnl *gnl, int i)
{
  if (gnl->line[i] == 32)
    {
      my_putstr("Error: invalid input (positive number expected)");
      return (-1);
    }
  return (i);
}

int		check_line(t_gnl *gnl, t_allum *a)
{
  int		i;

  i = 0;
  if (check_line_b(gnl) == -1)
    return (-1);
  while (gnl->line[i] != '\0')
    {
      if (check_line_c(gnl, i) == -1)
	return (-1);
      if (check_line2(gnl, i) == -1)
	return (-1);
      else if (i > 0)
	{
	  my_putstr("Error: this line is out of range");
	  return (-1);
	}
      else
	i = i + 1;
    }
  if (check_line3(a, gnl) == -1)
    return (-1);
  else
    return (0);
  return (0);
}
