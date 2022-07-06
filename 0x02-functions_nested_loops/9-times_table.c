#include "main.h"
/**
 * times_table - A program that prints the 9 times table
 * starting from 0 in a matrix format
 *
 * matrix = row, column, d = digit of current result
 *
 * Return: nine times table
 */
void times_table(void)
{
	int row, column, d;

	for (row = 0; row < 10; row++)
	{
		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (column = 1; column < 10; column++)
		{
			d = (row * column);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + 48);
			}
			else
			{
				_putchar(' ');
			}
				_putchar((d % 10) + 48);
				if (column < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
					_putchar('\n');
		}

	}

}
