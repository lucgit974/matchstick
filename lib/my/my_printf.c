#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

void flags(char c, va_list ap)
{
    if (c == 'c' || c == 'C')
        my_putchar(va_arg(ap, int));
    if (c == 'd' || c == 'i')
        my_put_nbr(va_arg(ap , int));
    if (c == 's')
        my_putstr(va_arg(ap, char *));
    if (c == 'o')
        put_my_oct(va_arg(ap, int));
    if (c == 'b')
        put_my_binary(va_arg(ap, int));
}

int my_printf(const char *format, ...)
{
    va_list ap;
    va_start(ap, format);

    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] != '%')
            my_putchar(format[i]);
        if (format[i] == '%' && format[i + 1] == '%' ) {
            my_putchar(format[i]);
            if (format[i + 1] != '\0')
                i++;
        }
        else if (format[i] == '%' && format[i + 1] != '\0') {
            flags(format[i +1], ap);
            if (format[i + 1] != '\0')
                i++;
        }
    }
    va_end(ap);
    return (0);
}