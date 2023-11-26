#include "main.h"
/**
* str - function
* @c: char
* Return: i
*/
int str(char *c)
{
	int i;

	if (c == NULL)
	{
		c = "(null)";
	}

	for (i = 0; c[i] != '\0'; i++)
	{

		_putchar(c[i]);
	}

	return (i);
}
