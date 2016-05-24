/*
** my_strcpy.c for my_strcpy in /home/delaga_l/rendu/09-10-2015/Piscine_C_J10/lib/my
** 
** Made by Landelin Delagarde
** Login   <delaga_l@epitech.net>
** 
** Started on  Sun Oct 11 13:20:03 2015 Landelin Delagarde
** Last update Mon May  2 13:27:37 2016 COULON Pierrick
*/

#include "ia.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i])
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
