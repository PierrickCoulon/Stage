/*
1;2802;0c** sever.c for server.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_sigcheck
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Mon Feb  1 19:10:58 2016
** Last update Wed Feb 17 18:48:30 2016 COULON Pierrick
*/

#include "../include/my_minitalk.h"


static t_static	*g_stat;

int		calcul_power(int power)
{
  int		ret;

  ret = 1;
  if (power == 0)
    return (ret);
  while (power != 0)
    {
      ret = ret * 2;
      power = power - 1;
    }
  return (ret);
}

void		my_sigusr_2(t_server *server)
{
  if (g_stat->cpt3 == 8)
    {
      while (server->cpt != 8)
	{
	  if (g_stat->str[server->cpt] == 1)
	    {
	      server->ret = calcul_power(server->power);
	      server->ret2 = server->ret2 + server->ret;
	    }
	  server->power = server->power - 1;
	  server->cpt = server->cpt + 1;
	}
      my_putchar(server->ret2);
      g_stat->cpt3 = 0;
    }
}

void		my_sigusr(int nb)
{
  t_server	*server;

  if (!(server = malloc(sizeof(server))))
    exit(1);
  server->cpt = 0;
  server->ret = 0;
  server->ret2 = 0;
  server->power = 7;
  if (g_stat->cpt3 == 0)
    {
      if (!(g_stat->str = malloc(8)))
	exit(1);
    }
  if (nb == 30 || nb == 10 || nb == 16)
    g_stat->str[g_stat->cpt3] = 0;
  else if (nb == 31 || nb == 12 || nb == 17)
    g_stat->str[g_stat->cpt3] = 1;
  g_stat->cpt3 = g_stat->cpt3 + 1;
  my_sigusr_2(server);
}

int		server(pid_t p)
{
  p = getpid();
  my_putstr("PID : ");
  my_put_nbr(p);
  my_putchar('\n');
  signal(SIGUSR1, my_sigusr);
  signal(SIGUSR2, my_sigusr);
  while (1)
    if (usleep(100000) == 0)
      {
	g_stat->cpt3 = 0;
      }
}

int		main(void)
{
  pid_t		p;


  if (!(g_stat = malloc(sizeof(g_stat))))
    return (-1);
  g_stat->cpt3 = 0;
  p = 0;
  server(p);
  return (0);
}
