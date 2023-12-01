#include "main.h"
/**
 * _printf - function
 * @format: char
 * Return: byte
 */
int _printf(const char *format, ...)
{
	unsigned int i, byte, s_count;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			s_count = str(va_arg(args, char *));
			i++;
			byte += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i+1] == 'd')
		  {
		    i++;
		  }
		else if (format[i+1] == 'i')
		  {
		    _putchar(va_arg(args, int));
		    i++;
		  }
		else if (format[i + 1])
		{
			_putchar('%');
		}

		byte += 1;
	}
	va_end(args);
	return (byte);
}
