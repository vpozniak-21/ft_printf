#include "ft_printf.h"

int ft_printf(const char *str, ...)
{
    va_list args;
    int len = 0;
    int i = 0;

    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            if (str[i] == '\0')
                break;
            handle_spec(str[i], &len, args);
        }
        else
        {
            len += write(1, &str[i], 1);
        }
        i++;
    }
    va_end(args);
    return (len);
}
