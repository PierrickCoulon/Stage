/*
** tools2.c for minishell1 in /home/delaga_l/Documents/Programmation_Systeme_Unix/PSU_2015_minishell1/srcs
** 
** Made by Landelin Delagarde
** Login   <delaga_l@epitech.net>
** 
** Started on  Wed Mar 23 09:37:17 2016 Landelin Delagarde
** Last update Mon May  2 13:21:57 2016 COULON Pierrick
*/

#include <stdlib.h>
#include "ia.h"

char	*my_merge(char *str1, char *str2)
{
  int	i;
  int	k;
  int	slen;
  char	*merge;

  i = 0;
  k = 0;
  if (!(merge = malloc(sizeof(char) * (my_strlen(str1) + my_strlen(str2) + 2))))
    return (0);
  slen = my_strlen(str1);
  while (i != slen)
    {
      merge[i] = str1[i];
      i = i + 1;
    }
  merge[i] = '\n';
  i += 1;
  slen = my_strlen(str2);
  while (k != slen)
    {
      merge[i] = str2[k];
      i = i + 1;
      k = k + 1;
    }
  merge[i] = 0;
  return (merge);
}
