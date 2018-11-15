/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** printf
*/


#include "lib/my/my_printf.h"

int	my_printf(char *str, ...)
{
  va_list	list;
  int		j;
  int 		letter;

  va_start(list, str);
  init_tab_and_pointer();
  for (j = 0; str[j] != 0; j++)
    {
      if ((str[j] == '%') && (char_in_array(my_tab_opt, str[j + 1]) == 1))
	{
	  letter = str[j + 1];
	  my_tab_printf[letter](list);
	  j = j + 1;
	}
      else if (str[j] == '%' && str[j + 1] == '%')
	{
	  ++j;
	  my_putchar(str[j]);
	}
      else
	my_putchar(str[j]);
    }
  va_end(list);
  return 1;
}
