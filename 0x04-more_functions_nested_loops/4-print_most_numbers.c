#include "main.h"
/**
 * print_most_numbers - print all number 0-9 except 2&4
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		else
		{
			_putchar(i);
		}
	i++;
	}
	_putchar('\n');
}
