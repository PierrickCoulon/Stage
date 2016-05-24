/*
** get_next_line.h for get_next_line.h in /home/coulon-b/rendu/C_PROG_ELEM/CPE_2015_getnextline
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Tue Jan  5 16:09:30 2016
** Last update Sun May 22 19:01:12 2016 Pierrick COULON
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# ifndef READ_SIZE
#  define READ_SIZE (2)
# endif /* !READ_SIZE */

static int	g_r = 0;
static char	g_buffer[READ_SIZE];
static int	g_my_static = 0;

typedef struct	s_param
{
  char		*str;
  int		cpt;
}		t_param;

char	*get_next_line(const int);
void	my_end(t_param *prm);
char	*my_get_next_line_2(t_param *prm);
char	*my_get_next_line_3(t_param *prm);
char	*my_realloc(char *str, int size);

#endif /* !GET_NEXT_LINE_H_ */