/*
** get_next_line.h for get_next_line.h in /home/coulon-b/rendu/C_PROG_ELEM/CPE_2015_getnextline
**
** Made by
** Login   <coulon-b@epitech.net>
**
** Started on  Tue Jan  5 16:09:30 2016
** Last update Sun Jan 24 17:08:34 2016 
*/

#ifndef MYSH_H_
# define MYSH_H_

typedef struct	s_par
{
  char		*elem;
  int		i;
  int		a;
  int		acs;
  int		exec;
  pid_t		p;
}		t_par;

typedef struct	s_genv
{
  int		a;
  int		i;
  int		cpt;
  int		cpt2;
  char		*path;
  char		**path2;
  int		executable;
  int		acs;
  pid_t		t;
}		t_genv;

int		my_elem(char **path2, char **str2, char **env);
int		my_getenv(char **env, char **str2);
int		my_wordtab_for_env(char *path, char **str2, char **env);
int             my_wordtab_for_env2(char **path2, char *path,
				    char **str2, char **env);
int		found_str2(char **str2, char **env);
int		my_str_to_wordtab(char *str, char **env);
int		my_str_to_wordtab2(char **str2, char *str, char **env);
int		my_exit2(char **str2);
int		my_executable(char **str2, char **env);
int		call(char *str, long result, int cpt1);
int		call2(char *str, int cpt1, int cpt2);
int		my_getnbr(char *str);
void		my_putchar(char c);
int		my_put_nbr(int nb);
int		my_putstr(char *str);
int		my_unsetenv(char **str2, char **env);
int		my_setenv(char **str2, char **env);
int		check_env(char **str2, char *env);
char		*my_strcat(char *dest, char *src);
char		*my_strcat_egal(char *dest, char *src);
char		*my_strcpy(char *dest, char *src);
int		my_strlen(char *str);
int		my_elem2(char **path2, char **str2, char **env, t_par *par);
void		my_getenv2(char **env, t_genv *genv);
void		my_getenv3(char *path, t_genv *genv);
void		my_str_to_4(char *str, t_genv *genv);
void		setenv2(int q, int a, char **str2, char **env);
int		setenv3(int q, int a, char **str2, char **env);
int		my_exec_3(t_genv *genv, char *buf, char **str2, char **env);
void		my_exex_2(char *buf, char **str2, t_genv *genv, char *exec);
void		use_argc_argv(int ac, char **av);
int		check_error_cd(char **str2);
void		found_str3(char **env, int i);

#endif /* !MYSH_H_ */
