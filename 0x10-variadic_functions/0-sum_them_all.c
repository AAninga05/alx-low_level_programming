#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that sum numbers
 * @n: unsigned int
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list num;

	va_start(num, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(num, unsigned int);
		}
		va_end(num);
	return (sum);
	putchar('\n');
}
