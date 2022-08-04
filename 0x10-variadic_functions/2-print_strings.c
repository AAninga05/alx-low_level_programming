#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that print string
 * @separator: string between string
 * @n: unsigned integer
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *strings;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		strings = va_arg(str, char *);
		if (strings)
		{
			printf("%s", strings);
		}
		else
		{
			printf("(nil)");
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(str);
	_putchar('\n');
}
