/*
** get_next_line.h for get_next_line.h in /home/coulon-b/rendu/C_PROG_ELEM/CPE_2015_getnextline
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Tue Jan  5 16:09:30 2016
** Last update Sun Feb 21 23:46:44 2016 COULON Pierrick
*/

#ifndef ALLUM1_H_
# define ALLUM1_H_

typedef struct  s_allum
{
  char		**str;
}		t_allum;

typedef struct  s_stat
{
  int		turn;
  int		cpt;
  int		cpt2;
  int		cpt3;
}		t_stat;

typedef struct	s_gnl
{
  char		*matches;
  char		*line;
}		t_gnl;

typedef struct  s_temp
{
  int		cpt;
  int		cpt2;
  int		tmp;
}		t_temp;

void		my_putchar(char c);
void		display_main(t_allum *a);
void		display_remov(t_gnl *gnl);
void		display(t_allum *a);
char		*check_matches_main(t_gnl *gnl, t_allum *a);
char		*check_line_main(t_gnl *gnl, t_allum *a);
char		*check_inf(t_gnl *gnl, t_allum *a);
int		check_tmp(int tmp, t_allum *a);
int		check_line(t_gnl *gnl, t_allum *a);
int		check_line_b(t_gnl *gnl);
int		check_line_c(t_gnl *gnl, int i);
int		check_line2(t_gnl *gnl, int i);
int		check_line3(t_allum *a, t_gnl *gnl);
int		check_who_win(t_allum *a, t_stat *sta);
int		fill(t_allum *a);
int		fill2(t_allum *a, int ret, int line, t_temp *b);
int		modif(t_gnl *gnl, t_allum *a, int tmp);
int		modif_ia_and_display(t_gnl *gnl, t_allum *a);
int		modif_line_1(t_gnl *gnl, t_allum *a);
int		modif_line_2(t_gnl *gnl, t_allum *a, t_stat *sta);
int		modif_line_3(t_gnl *gnl, t_allum *a, t_stat *sta);
int		modif_line_4(t_gnl *gnl, t_allum *a, t_stat *sta);
int		allum1(int tmp, t_allum *a, t_gnl *gnl);
int		print_game_board(t_allum *a);
int		check_line_ia(t_allum *a);
int		check_match_ia(t_gnl *gnl, t_allum *a);
int		check_matches(t_gnl *gnl, t_allum *a);
int		check_matches_l1_l2(t_gnl *gnl, t_allum *a, int i);
int		check_matches_l3_l4(t_gnl *gnl, t_allum *a, int i);
int		check_no_arg(t_gnl *gnl);
int		check_err_for_l_1(t_allum *a, t_gnl *gnl);
int		check_err_for_l_2(t_allum *a, t_gnl *gnl);
int		check_err_for_l_3(t_allum *a, t_gnl *gnl);
int		check_err_for_l_4(t_allum *a, t_gnl *gnl);
int		check_err_for_l_1_b(t_gnl *gnl, int i);
int		check_err_for_l_2_b(t_gnl *gnl, int i);
int		check_err_for_l_3_b(t_gnl *gnl, int i);
int		check_err_for_l_4_b(t_gnl *gnl, int i);
int		check_pips(t_allum *a, t_gnl *gnl);
int		my_put_nbr(int nb);
int		modification(t_gnl *gnl,
			     t_allum *a, t_stat *sta);
int		my_putstr(char *str);
int		my_getnbr(char *str);

#endif /* !ALLUM1_H_ */
