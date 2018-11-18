/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** opt2
*/

#include "my_printf.h"

void	my_printf_o(va_list	list)
{
  int	nb;

  nb = va_arg(list, int);
  my_put_base_nbr(nb, 'o');
}

void	my_printf_u(va_list	list)
{
  int	nb;

  nb = va_arg(list, int);
  my_put_unsigned_nbr(nb);
}

void	my_printf_x(va_list	list)
{
  int  	nb;

  nb = va_arg(list, int);
  my_put_base_nbr(nb, 'x');
}

void	my_printf_upper_x(va_list	list)
{
  int	nb;

  nb = va_arg(list, int);
  my_put_base_nbr(nb, 'X');
}
