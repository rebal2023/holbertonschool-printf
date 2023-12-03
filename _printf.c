#include "main.h"
/**
* _printf - function similar to printf
* @format: const char *
* Return: int
*/
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int j =0;
        va_list args;
        va_start(args, format);
     
	if (format == NULL)
	return (-1);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);

		else if (format[i] != '%')
			j += _putchar(format[i]);
		else
		{
			if (format[i++] == '\0')
				return (-1);
			else
			{
				if (_get_function(format[i]) != NULL)
					j += (*_get_function(format[i]))(args);
				else
					j += nothing(format[i]);
			}
		}
		i++;
	}
	va_end(args);
	return (j);
}
