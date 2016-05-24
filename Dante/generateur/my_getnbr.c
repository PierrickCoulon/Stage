/*
** my_getnbr.c for my_getnbr.c in /home/coulon_b/rendu/rappel_notion
**
** Made by Pierrick Coulon
** Login   <coulon_b@epitech.net>
**
** Started on  Tue Oct 13 11:12:41 2015 Pierrick Coulon
** Last update Mon Feb  8 12:54:36 2016 COULON Pierrick
*/

int	call(char *str, long result, int cpt1)
{
  if (str[cpt1 - 1] == '-')
    result = -(result);
  if (result > 2147483647 || result < -(2147483648))
    return (0);
  return (result);
}

int	call2(char *str, int cpt1, int cpt2)
{
  int	cpt3;
  int	puissance;
  long	addition;
  long	result;

  cpt3 = 0;
  result = 0;
  while (cpt2 != 0)
    {
      puissance = cpt3;
      addition = str[(cpt2 + cpt1) - 1] - 48;
      while (puissance != 0)
        {
          addition = addition * 10;
          puissance = puissance - 1;
        }
      result = result + addition;
      cpt3 = cpt3 + 1;
      cpt2 = cpt2 - 1;
    }
  return (call(str, result, cpt1));
}

int	my_getnbr(char *str)
{
  int	cpt1;
  int	cpt2;

  cpt1 = 0;
  cpt2 = 0;
  while (str[cpt1] > '9' || str[cpt1] < '0')
    cpt1 = cpt1 + 1;
  while (str[cpt2 + cpt1] >= '0' && str[cpt2 + cpt1] <= '9')
    cpt2 = cpt2 + 1;
  return (call2(str,cpt1, cpt2));
}
