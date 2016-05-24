/*
** my_strdup.c for my_strdup in /home/delaga_l/rendu/09-10-2015/Piscine_C_J10/lib/my
** 
** Made by Landelin Delagarde
** Login   <delaga_l@epitech.net>
** 
** Started on  Sun Oct 11 13:20:28 2015 Landelin Delagarde
** Last update Mon May  2 13:26:07 2016 COULON Pierrick
*/

#include <stdlib.h>
#include "ia.h"

char	*my_strdup(char *str)
{
  char	*dest;

  if (!(dest = (char *)malloc(sizeof(char) * my_strlen(str) + 1)))
    return (NULL);
  dest = my_strcpy(dest, str);
  dest[my_strlen(str)] = 0;
  return (dest);
}
