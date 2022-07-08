#include "main.h"
/**
 * print_diagonal - Draws diagonal line on the terminal
 * @n: integer number
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int l, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			for (c = 2; c <= l; c++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
