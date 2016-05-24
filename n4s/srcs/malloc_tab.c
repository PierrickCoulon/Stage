/*
** malloc_tab.c for malloc_tab in /home/pinalo_c/rendu/C_prog_elem/CPE_2015_n4s/CPE_2015_n4s
** 
** Made by Cyril pinalo_c
** Login   <pinalo_c@epitech.net>
** 
** Started on  Wed Apr 27 15:16:10 2016 Cyril pinalo_c
** Last update Wed Apr 27 15:29:53 2016 Cyril pinalo_c
*/

#include "ia.h"

int		count_line_back(char *str)
{
  int		i;
  int		j;
  int		tmp;

  i = 0;
  j = 0;
  tmp = 0;
  while (str[i] != '\0')
    {
      while (str[i] != ':' && str[i] != '\0')
        {
          i = i + 1;
          j = j + 1;
        }
      if (j > tmp)
        tmp = j;
      j = 0;
      if (str[i] != ':')
        i = i + 1;
    }
  return (tmp);
}

char		**malloc_tab(char **tab, char *str)
{
  int		i;
  int		cpt;
  int		cpt_mal;
  int		cpt_tmp;
  int		cpt2;
  int		cpt3;

  cpt_mal = my_strlen(str);
  cpt2 = 0;
  cpt3 = 0;
  cpt_tmp = 0;
  i = 0;
  cpt = 0;
  while (str[i] != '\0')
    {
      if (str[i] == ':')
        cpt = cpt + 1;
      i = i + 1;
    }
  if ((tab = malloc(sizeof(char *) * (cpt + 1))) == NULL)
    return (NULL);
  while (cpt3 != cpt_mal)
    {
      cpt_tmp = 0;
      while (str[cpt2] != ':' && str[cpt2] != 0)
        {
          cpt2 = cpt2 + 1;
          cpt_tmp = cpt_tmp + 1;
        }
      cpt2 = cpt2 + 1;
      if (!(tab[cpt3] = malloc(sizeof(char) * cpt_tmp + 1)))
        return (NULL);
      cpt3 = cpt3 + 1;
    }
  return (tab);
}


char		**str_to_word_tab(char *str)
{
  char		**tab = NULL;
  int		i;
  int		j;
  int		k;

  if (!(tab = malloc_tab(tab, str)))
    return (NULL);
  i = 0;
  j = 0;
  k = 0;
  while (str[i] != '\0')
    {
      while (str[i] != ':' && str[i] != '\0')
        {
          tab[j][k] = str[i];
          i = i + 1;
          k = k + 1;
        }
      tab[j][k] = '\0';
      if (str[i] != '\0')
        i = i + 1;
      j = j + 1;
      k = 0;
    }
  tab[j] = NULL;
  return (tab);
}
