/*
** my_putchar.c for my_putchar.c in /home/coulon-b/rendu/C_PROG_ELEM/PSU_2015_my_exec/lib
** 
** Made by 
** Login   <coulon-b@epitech.net>
** 
** Started on  Tue Jan  5 11:45:55 2016 
** Last update Sat Jan 23 05:50:56 2016 
*/

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "mysh.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}
