/*
** check_matches.c for check_matches.c in /home/coulon-b/rendu/CPE_2015_Allum1
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Thu Feb 11 18:14:50 2016 COULON Pierrick
** Last update Thu Feb 18 19:56:48 2016 COULON Pierrick
*/

#include <stdlib.h>
#include "../include/allum1.h"
#include "../include/get_next_line.h"

int		check_no_arg(t_gnl *gnl)
{
  if (gnl->matches[0] == '\0')
    {
      my_putstr("Error: invalid input (positive number expected)");
      return (-1);
    }
  return (0);
}

int		check_matches_l1_l2(t_gnl *gnl, t_allum *a, int i)
{
  if (gnl->line[0] == '1')
    {
      if (check_err_for_l_1(a, gnl) == -1)
	return (-1);
      while (gnl->matches[i] != '\0')
	{
	  if (check_err_for_l_1_b(gnl, i) == -1)
	    return (-1);
	  i = i + 1;
	  return (0);
	}
    }
  if (gnl->line[0] == '2')
    {
      if (check_err_for_l_2(a, gnl) == -1)
	return (-1);
      while (gnl->matches[i] != '\0')
	{
	  if (check_err_for_l_2_b(gnl, i) == -1)
	    return (-1);
	  i = i + 1;
	  return (0);
	}
    }
  return (0);
}

int		check_matches_l3_l4(t_gnl *gnl, t_allum *a, int i)
{
  if (gnl->line[0] == '3')
    {
      if (check_err_for_l_3(a, gnl) == -1)
	return (-1);
      while (gnl->matches[i] != '\0')
	{
	  if (check_err_for_l_3_b(gnl, i) == -1)
	    return (-1);
	  i = i + 1;
	  return (0);
	}
    }
  if (gnl->line[0] == '4')
    {
      if (check_err_for_l_4(a, gnl) == -1)
	return (-1);
      while (gnl->matches[i] != '\0')
	{
	  if (check_err_for_l_4_b(gnl, i) == -1)
	    return (-1);
	  i = i + 1;
	  return (0);
	}
    }
  return (0);
}

int		check_matches(t_gnl *gnl, t_allum *a)
{
  int		i;

  i = 0;
  if (check_no_arg(gnl) == -1)
    return (-1);
  if (check_matches_l1_l2(gnl, a, i) == -1)
    return (-1);
  if (check_matches_l3_l4(gnl, a, i) == -1)
    return (-1);
  return (0);
}
