/*
** my_strlen.c for my_strlen.c in /home/coulon_b/rendu/Piscine_C_J04
**
** Made by Pierrick Coulon
** Login   <coulon_b@epitech.net>
**
** Started on  Thu Oct  1 21:18:08 2015 Pierrick Coulon
** Last update Tue Oct  6 11:05:53 2015 Pierrick Coulon
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
