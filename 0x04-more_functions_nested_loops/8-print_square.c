#include "main.h"
/**
 * print_square - prints square followed by newline
 * @size: Size of square to print
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int l, c;

	l = 0;
	while (l < size)
	{
		c = 0;
		while (c < size)
		{
			_putchar(35);
			c++;
		}
			if (c != (size - 1))
			{
				_putchar('\n');
			}
		_putchar('\n');
	}
}
