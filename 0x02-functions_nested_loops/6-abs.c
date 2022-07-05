#include "main.h"
/**
 * _abs - program that prints out absolute value of interger
 *
 * @n: Integer parameter
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar(n);
		_putchar(10);
	}
	return (0);
}
