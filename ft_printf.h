#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int ft_printf(const char *str, ...);
void ft_handle_specifiers(char current_char, int *len, va_list args);
int ft_putstr(char *s);
int ft_putnbr(int n);
int ft_putnbr_base(unsigned long value, int specifier);
char *ft_strchr(const char *str, int c);

#endif
