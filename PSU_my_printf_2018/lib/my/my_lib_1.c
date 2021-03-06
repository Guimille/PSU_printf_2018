/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** lib 1
*/

#include "my_printf.h"

void  my_putchar(char c)
{
  write(1, &c, 1);
}

void  my_putstr(char *str)
{
  while (*str != '\0')
  {
    my_putchar(*str);
    str = str + 1;
  }
}

int   my_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
  {
    str = str + 1;
    i = i +1;
  }
  return (i);
}

void  my_put_nbr(int nb)
{
  int i;
  int res;
  
  res = 0;
  i = 1;
  if (nb == -2147483648)
    my_putstr("-2147483648");
  else
  {
    if (nb < 0)
      {
	my_putchar('-');
	nb = nb * -1;
      }
    while ((nb / i) >= 10)
      i = i * 10;
    while (i > 0)
      {
	res = (nb / i) % 10;
	my_putchar(res + '0');
	i = i / 10;
      }
  }
}

void  my_put_unsigned_nbr(unsigned int nb)
{
  int   i;
  int   res;

  res = 0;
  i = 1;
  while ((nb / i) >= 10)
    i = i * 10;
  while (i > 0)
    {
      res = (nb / i) % 10;
      my_putchar(res + '0');
      i = i / 10;
    }
}
