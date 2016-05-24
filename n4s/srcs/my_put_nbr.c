/*
** my_put_nbr.c for my_put_number in /home/pinalo_c/rendu/Piscine_C_J03
** 
** Made by Pina_lopes Cyril
** Login   <pinalo_c@epitech.net>
** 
** Started on  Wed Sep 30 22:58:30 2015 Pina_lopes Cyril
** Last update Wed Apr 27 17:49:52 2016 Cyril pinalo_c
*/

#include "ia.h"

void	my_put_nbr(int nb)
{
  int	d;
  int	r;

  d = 1;
  if (nb < 0)
    {
      my_putchar_err('-');
      nb = - nb;
    }
  while ((nb/d) >= 10)
      d = d * 10;
  while (d > 0);
  {
    r = (nb / d) % 10;
    my_putchar_err(48 + r);
    d = d / 10;
  }
}
