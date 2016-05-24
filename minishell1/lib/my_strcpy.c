/*
** my_strcpy.c for my_strcpy.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_minishell1
** 
** Made by 
** Login   <coulon-b@epitech.net>
** 
** Started on  Thu Jan 21 18:37:31 2016 
** Last update Thu Jan 21 19:00:37 2016 
*/

char		*my_strcpy(char *dest, char *src)
{
  int		a;

  a = 0;
  while (src[a] != '\0')
    {
      dest[a] = src[a];
      a = a + 1;
    }
  dest[a] = '\0';
  return (dest);
}
