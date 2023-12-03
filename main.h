#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int _putchar(char  c);
int str(char *c);
int _printf(const char *format, ...);
int nothing(char s);
int (*_get_function(char s))(va_list);
#endif
