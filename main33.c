#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_printf.h"

int main(void)
{
  ft_printf("%X\n", 15);
  ft_printf("%X\n", 16);
  ft_printf("%X\n", 17);
  ft_printf("%u, %X, %X\n", 4294967284, 4294967284, 4294967284);
  ft_printf("%u, %X, %X\n", 4294967284, 4294967284, 4294967284);
  printf("%lx, %lX\n", 4294967284, 4294967284);
}
