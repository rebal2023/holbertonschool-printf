#include "main.h"
/**
* print_string - function to print a string
* @str: string to be printed
* Return: string
*/
int print_string(const char *str)
{
int i = 0;

if (str == NULL)
{
str = "(null)";
}
while (*str)
{
i += _putchar(*str);
str++;
}
return (i);
}
