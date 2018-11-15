y/*
** EPITECH PROJECT, 2018
** myprintf
** File description:
** opt 1
*/

#include "my_printf.h"

void	my_printf_s(va_list list)
{
  char		*str;

  str = va_arg(list, char *);
  my_putstr(str);
}

void	my_printf_c(va_list list)
{
  char		c;

  c = (char) va_arg(list, int);
  my_putchar(c);
}

void	my_printf_i(va_list list)
{
  int		nb;

  nb = va_arg(list, int);
  my_put_nbr(nb);
}

void	my_printf_d(va_list list)
{
  int		nb;

  nb = va_arg(list, int);
  my_put_nbr(nb);
}
