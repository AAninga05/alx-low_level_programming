#include "main.h"
/**
 * print_times_table - prints n times table, starting with 0
 * @n: number of times table
 */
void print_times_table(int n)
{
	int r, c, x;

	if (n >= 0 && n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				x = r * c;
				if (r == 0)
				{
					_putchar(x + 48);
				} else if (x < 10 && r != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + 48);
				} else if (x >= 10 && x < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x / 10) + 48);
					_putchar((x % 10) + 48);
				} else if (x >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x / 100) + 48);
					_putchar((x / 10) + 48);
					_putchar((x % 10) + 48);
				}
			}
		_putchar('\n');
		}
	}
}
