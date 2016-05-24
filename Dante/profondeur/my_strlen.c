/*
** my_strlen.c for my_strlen.c in /home/coulon_b/Rendu/IA/dante
** 
** Made by COULON Pierrick
** Login   <coulon_b@epitech.net>
** 
** Started on  Mon May  2 13:22:09 2016 COULON Pierrick
** Last update Mon May  2 13:23:18 2016 COULON Pierrick
*/

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != 0)
    i++;
  return (i);
}
