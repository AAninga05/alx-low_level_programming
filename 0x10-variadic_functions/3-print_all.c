#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: string of formats used to identify what to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cisf";
	va_list ptrall;

	va_start(ptrall, format);

	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptrall, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptrall, int)), c = 1;
				break;
			case 's':
				str = va_arg(ptrall, char *);
				if (!str)
				{
					printf("nill");
					break;
				}
					printf("%s", str);
					break;
			case 'f':
				printf("%f", va_arg(ptrall, double)), c = 1;
				break;
		} i++;
	}
	va_end(ptrall), putchar('\n');
}
