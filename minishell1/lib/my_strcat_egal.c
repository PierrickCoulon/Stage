/*
** my_strcat.c for my_strcat.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Thu Jan 21 18:47:39 2016
** Last update Fri Jan 22 23:06:41 2016 
*/

char		*my_strcat_egal(char *dest, char *src)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  while (dest[a] != '\0')
    a = a + 1;
  dest[a] = '=';
  a = a + 1;
  while (src[b] != '\0')
    {
      dest[a] = src[b];
      a = a + 1;
      b = b + 1;
    }
  return (dest);
}
