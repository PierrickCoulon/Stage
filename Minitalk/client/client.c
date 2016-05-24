/*
1;2802;0c** my_sigcheck.c for my_sigcheck.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_sigcheck
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Mon Feb  1 17:56:15 2016
** Last update Wed Feb 17 18:53:12 2016 COULON Pierrick
*/

#include "../include/my_minitalk.h"

int		my_char_in_bin(char *bin, char **av)
{
  int		cpt;

  cpt = 0;
  while (cpt != 8)
    {
      if (bin[cpt] == 0)
	{
	  if (kill(my_getnbr(av[1]), SIGUSR1) == -1)
	    return (-1);
	}
      else if (bin[cpt] == 1)
	{
	  if (kill(my_getnbr(av[1]), SIGUSR2) == -1)
	    return (-1);
	}
      while (usleep(1500) != 0)
      	;
      cpt = cpt + 1;
    }
  return (0);
}

void		move_my_bin_in_str(t_client *client, unsigned char str)
{
  while (str > 1)
    {
      client->ret = str % 2;
      client->str2[client->cpt] = client->ret;
      str = str / 2;
      client->cpt = client->cpt - 1;
    }
  client->str2[client->cpt] = str;
  client->cpt = client->cpt - 1;
  while (client->cpt >= 0)
    {
      client->str2[client->cpt] = 0;
      client->cpt = client->cpt - 1;
    }
}

int		convert_bin(char *str, char **av)
{
  t_client	*client;

  if (!(client = malloc(sizeof(client))))
    return (-1);
  if (!(client->str2 = malloc(8)))
    return (-1);
  client->i = 0;
  client->ret = 0;
  client->cpt = 7;
  while (str[client->i] != '\0')
    {
      move_my_bin_in_str(client, str[client->i]);
      usleep(1500);
      if (my_char_in_bin(client->str2, av) == -1)
	return (-1);
      client->cpt = 7;
      client->i = client->i + 1;
    }
  return (0);
}

int		main(int ac, char **av)
{
  int	 	i;

  i = 0;
  if (ac < 3 || ac > 3)
    return (-1);
  while (av[1][i] != '\0')
    {
      if (av[1][i] > '9' || av[1][i] < '0')
	{
	  write(2, "PID ONLY NUMBERS\n", 18);
	  return (-1);
	}
      else
	i = i + 1;
    }
  if (convert_bin(av[2], av) == -1)
    {
      write(2, "FALSE PID\n", 11);
      return (-1);
    }
  return (0);
}
