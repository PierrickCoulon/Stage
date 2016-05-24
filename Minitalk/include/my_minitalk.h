/*
** get_next_line.h for get_next_line.h in /home/coulon-b/rendu/C_PROG_ELEM/CPE_2015_getnextline
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Tue Jan  5 16:09:30 2016
** Last update Mon Feb  8 16:41:14 2016 COULON Pierrick
*/

#ifndef MY_MINITALK_H_
# define MY_MINITALK_H_
# define _POSIX_SOURCE
# define _BSD_SOURCE

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

typedef struct			s_static
{
  int				cpt;
  int				cpt2;
  int				cpt3;
  char				*str;
}				t_static;

typedef struct			s_client
{
  int				i;
  int				cpt;
  int				ret;
  char				*str2;
  int				cpt4;
}				t_client;

typedef struct			s_server
{
  int				power;
  int				cpt;
  int				ret;
  int				ret2;
}				t_server;

void		my_putchar(char c);
int		my_putstr(char *str);
int		my_put_nbr(int nb);
int		my_getnbr(char *str);
int		my_char_in_bin(char *bin, char **av);
int		convert_bin_2(t_client *client, char *str);
void		move_my_bin_in_str(t_client *client, unsigned char str);
int		convert_bin(char *str, char **av);
int		calcul_power(int power);
void		my_sigusr_2(t_server *server);
void		my_sigusr(int nb);
int		server(pid_t p);

#endif /* !MY_MINITALK_H_ */
