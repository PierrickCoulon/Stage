/*
** client.h for client in /home/delaga_l/Documents/Progammation_Systeme_Unix/PSU_2015_minitalk/include
** 
** Made by Landelin Delagarde
** Login   <delaga_l@epitech.net>
** 
** Started on  Tue Feb  9 08:48:29 2016 Landelin Delagarde
** Last update Fri Apr 29 13:30:27 2016 Cyril pinalo_c
*/

#ifndef IA_H_
# define IA_H_

/*
** /==============================\
** |          Includes            |
** \==============================/
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

/*
** /==============================\
** |           Structs            |
** \==============================/
*/


/*
** /==============================\
** |          Prototypes          |
** \==============================/
*/

int	my_strlen(char *str);
char	*get_next_line(const int file);
char	**str_to_word_tab(char *str);
int	my_getnbr(char *str);
void	my_putchar_err(char c);
void	my_putstr_err(char *str);
int	my_strlen(char *str);
void	my_putstr(char *str);
void	my_put_nbr(int nb);
void	trash_gnl(char *str);
char	*gnl(char *str);
int	function(char *str);

#endif	/* !IA_H_ */
