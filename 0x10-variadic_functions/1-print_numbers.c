#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints number
 * @separator: char
 * @n: unsigned int
 *
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, all;
	va_list numb;

	va_start(numb, n);
	for (i = 0; i < n; i++)
	{
		all = va_arg(numb, unsigned int);
		printf("%d", all);
		if (separator != NULL && i < n - 1)
		{
			printf("%d", separator);
		}
	}
	va_end(numb);
	_putchar('\n');
}
