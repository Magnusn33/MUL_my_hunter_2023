/*
** EPITECH PROJECT, 2023
** my_printf.c
** File description:
** My printf function
*/

#include <stdarg.h>
#include "../headerfiles.h"

int write_format(va_list ap, const char *format)
{
    int i;
    int cnt = 0;

    switch (*format) {
    case 's':
        cnt = my_putstr(va_arg(ap, char *));
        return (cnt);
    case 'i':
        i = va_arg(ap, int);
        return (my_put_nbr(i));
    case 'd':
        i = va_arg(ap, int);
        return (my_put_nbr(i));
    case 'c':
        my_putchar((char) va_arg(ap, int));
        return (1);
    case '%':
        my_putchar('%');
        return (1);
    }
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int nb = 0;

    if (!(*format)) {
        return (-1);
    }
    va_start(ap, format);
    while (*format) {
        if (*format != '%') {
            nb = nb + 1;
            my_putchar(*format);
            format++;
        } else {
            format++;
            nb = nb + write_format(ap, format);
            format++;
        }
    }
    va_end(ap);
    return (nb);
}
