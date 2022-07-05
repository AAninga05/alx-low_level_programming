#include "main.h"
/**
 * print_last_digit - program that prints last digit of integer
 *
 * @n: Integer parameter
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int x;
		if (n < 0)
	{
		n = -n;
		x  = n % 10;
		_putchar(x + 48);
		return (n);
	}
}

