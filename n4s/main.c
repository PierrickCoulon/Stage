/*
** main.c for main.c in /home/coulon_b/Rendu/C_PROG_ELEM/CPE_2015_n4s
**
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
**
** Started on  Tue Apr 26 16:17:56 2016 COULON Pierrick
** Last update Sat May 14 10:29:42 2016 Simon RAGUIN
*/

#include "ia.h"

int		main(void)
{
  char		*str;

  trash_gnl("START_SIMULATION\n");
  while (1)
    {
      str = gnl("GET_INFO_LIDAR\n");
      if ((function(str)) == 1)
	return (0);
    }
  return (0);
}

int		function(char *str)
{
  char		**tab = NULL;
  float		dist;
  float		right;
  float		left;

  tab = str_to_word_tab(str);
  dist = my_getnbr(tab[18]);
  right = my_getnbr(tab[34]);
  left = my_getnbr(tab[3]);
  if (dist > 900)
    {
      trash_gnl("CAR_FORWARD:0.8\n");
      trash_gnl("WHEELS_DIR:0\n");
    }
  else if (dist <= 900)
    {
      if (dist > 500)
	{
	  my_putchar_err('A');
	  trash_gnl("CAR_FORWARD:0.23\n");
	  if (right > left)
	    {
	      my_putchar_err('B');
	      trash_gnl("WHEELS_DIR:-0.2\n");
	    }
	  else if (right <= left)
	    {
	      my_putchar_err('C');
	      trash_gnl("WHEELS_DIR:0.2\n");
	    }
	}
      else if (dist <= 500)
	{
	  my_putchar_err('D');
	  trash_gnl("CAR_FORWARD:0.15\n");
	  if (right > left)
	    {
	      my_putchar_err('F');
	      trash_gnl("WHEELS_DIR:-0.4\n");
	    }
	  else if (right <= left)
	    {
	      my_putchar_err('H');
	      trash_gnl("WHEELS_DIR:0.4\n");
	    }
	  if (dist <= 20)
	    {
	      trash_gnl("STOP_SIMULATION\n");
	      return (1);
	    }
	}
    }
  return (0);
}
