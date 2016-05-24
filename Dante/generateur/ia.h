/*
** client.h for client in /home/delaga_l/Documents/Progammation_Systeme_Unix/PSU_2015_minitalk/include
**
** Made by Landelin Delagarde
** Login   <delaga_l@epitech.net>
**
** Started on  Tue Feb  9 08:48:29 2016 Landelin Delagarde
** Last update Sun May 22 17:49:29 2016 COULON Pierrick
*/

#ifndef IA_H_
# define IA_H_

/*
** /==============================\
** |          Includes            |
** \==============================/
*/

/*              EMPTY            */

/*
** /==============================\
** |           Structs            |
** \==============================/
*/

typedef struct	s_struct
{
  int           width;
  int           height;
}		t_struct;

typedef struct	s_gen
{
  int           i;
  int           r;
  int           r2;
  int           a;
  int           tmp;
  int           ok;
  int           ok2;
  char          *check2;
}		t_gen;

/*
** /==============================\
** |          Prototypes          |
** \==============================/
*/
char    *my_strdup(char *str);
char	**str_to_word_tab(char *str);
char    *my_merge(char *str1, char *str2);
int	my_strlen(char *str);
char    *my_strcpy(char *dest, char *src);
char    *my_putstr(char *str);
int	my_getnbr(char *str);
void	check_ilot(char **tab);
char	**check_solver(char **tab);
char	**fill2(char **tab, t_struct *s, t_gen *g);
char	**fill3(t_gen *g, char **tab);
void	fill4(t_gen *g, char **tab, char *check);

#endif	/* !IA_H_ */
