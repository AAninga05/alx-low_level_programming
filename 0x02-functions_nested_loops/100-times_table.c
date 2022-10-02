#include "main.h"
/**
 * print_times_table - prints n times table, starting with 0
 * @n: number of times table
 */
void print_times_table(int n)
{
	int r, c, prod;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			_putchar('0');
			for (c = 1; c <= n; c++)
			{
				_putchar(',');
				_putchar(' ');

				prod = r * c;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 10 && prod <= 99)
					_putchar((prod / 10) + '0');
				else if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
		_putchar('\n');
		}
	}
}
