#include "main.h"
/**
* _printf - function similar to printf
* @format: const char
* Return: int
*/
int _printf(const char *format, ...)
{
int i = 0;
va_list args;
va_start(args, format);
if (!format || !format[0])
return (-1);
while (*format != '\0')
{
if (*format != '%')
{
i += _putchar(*format);
}
else
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
_putchar(c);
i++;
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
i += print_string(str);
}
else if (*format == '%')
{
i += _putchar('%');
}
else if (*format == 'd' || *format == 'i')
{
int num = va_arg(args, int);
char buffer[20];
int length = snprintf(buffer, sizeof(buffer), "%d", num);
write(1, buffer, length);
i += length;
}
}
format++;
}
va_end(args);
return (i);
}
