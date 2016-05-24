/*
** client.h for client in /home/delaga_l/Documents/Progammation_Systeme_Unix/PSU_2015_minitalk/include
** 
** Made by Landelin Delagarde
** Login   <delaga_l@epitech.net>
** 
** Started on  Tue Feb  9 08:48:29 2016 Landelin Delagarde
** Last update Sun May 22 16:56:15 2016 COULON Pierrick
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
  char		**tab;
  int		x_max;
  int		y_max;
  unsigned int	max;
}		t_struct;

/*
** /==============================\
** |          Prototypes          |
** \==============================/
*/
char    *my_strdup(char *str);
char	**str_to_word_tab(char *str);
char    *my_merge(char *str1, char *str2);
int	my_strlen(char *str);
int	*my_getnbr(char *str);
char    *my_strcpy(char *dest, char *src);
char    *my_putstr(char *str);
int	my_putchar_modif(char c);

#endif	/* !IA_H_ */
