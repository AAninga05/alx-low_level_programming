#include "main.h"
/**
 * print_numbers - function that prints numbers 0 - 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
