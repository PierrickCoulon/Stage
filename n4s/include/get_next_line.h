/*
** get_next_line.h for get_next_line.h in /home/coulon-b/rendu/C_PROG_ELEM/CPE_2015_getnextline
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Tue Jan  5 16:09:30 2016
** Last update Fri Feb 26 22:16:28 2016 Pierrick Coulon
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# ifndef READ_SIZE
#  define READ_SIZE (1)
# endif /* !READ_SIZE */

typedef struct	s_param
{
  char		*str;
  int		cpt;

}		t_param;

char	*get_next_line(const int);
void	my_end(t_param *prm);
char	*my_get_next_line_2(t_param *prm);
int	my_realloc(char *str);
int	my_exit(char **str2, char **env);
void	my_putchar(char c);

#endif /* !GET_NEXT_LINE_H_ */
