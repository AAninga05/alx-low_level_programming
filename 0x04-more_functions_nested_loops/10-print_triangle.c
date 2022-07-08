#include "main.h"
/**
 * print_triangle - a function that prints a triangle followed by a newline
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, r;

	i = 0;
	while (i < size)
	{
		for (r = 1; r < (size - i); r++)
		{
		_putchar(' ');
		}
		for (r--; r < size; r++)
		{
		_putchar(35);
		}
		if (i < (size -1))
		{
		_putchar('\n');
		}
	i++;
	}
	_putchar('\n');
}
