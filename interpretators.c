#include "ft_printf.h"

void interpretators_specifiers(char spcfr, int *len, va_list args)
{
	if (spcfr == 'c')
		interpret_char(&len, args);
	else if (spcfr == 's')
		interpret_string(&len, args);
	else if (spcfr == 'p')
		interpret_pntr(len, args);


	else if (spcfr == '%')
		*len += write(1, "%", 1);



}

void interpret_char(int *len, va_list arg)
{
	char	c;
	c = va_arg(arg, int);
	*len = write(1, &c, 1);
}

void interpret_string(int *len, va_list arg)
{
	char *string;
	string = va_arg(arg, char *);
	if(string == NULL)
		*len = write(1, "(null)", 1);
	else
		*len = ft_putstr(string);
}

void interpret_pntr(int *len, va_list arg)







//вспомагательные для интерпретатора
int ft_putstr( char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return(i);
}
