#include "main.h"
/**
 * more_numbers - print x10 the number 0-14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int l, n;

	for (l = 0; l < 10; l++)
	{
	n = 0;
	while (n <= 14)
	{
		if (n >= 10)
		{
			_putchar((n / 10) + 48);
		}
	_putchar((n % 10) + 48);
	n++;
	}
	_putchar('\n');
	}
}
