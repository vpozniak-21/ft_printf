#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list args;
	int len;
	int i;

	va_start(args, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			interpretator_specifiers(&str, &len, args);
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}