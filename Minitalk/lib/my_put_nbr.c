/*
** my_put_nbr.c for my_put_nbr.c in /home/coulon_b/rendu/Piscine_C_J03
**
** Made by Pierrick Coulon
** Login   <coulon_b@epitech.net>
**
** Started on  Wed Sep 30 18:22:25 2015 Pierrick Coulon
** Last update Wed Feb  3 12:48:15 2016 
*/

#include <unistd.h>
#include "../include/my_minitalk.h"

int	my_put_nbr(int nb)
{
  int	result;
  int	diviseur;

  if (nb < 0)
    {
      my_putchar('-');
      nb = - nb;
    }
  diviseur = 1;
  while ((nb / diviseur) >= 10)
    diviseur = diviseur * 10;
  while (diviseur > 0)
    {
      result = (nb / diviseur) % 10;
      my_putchar(48 + result);
      diviseur = diviseur / 10;
    }
  return (0);
}
