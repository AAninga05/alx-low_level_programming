#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: is an integer
 * Return: none
 */
void print_number(int n)
{
	int last_digit, length, div, tmp;

	/*Calculating last digit*/
	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar('-');
		last_digit = last_digit * (-1);
	}
	/*Calculate the number without last digit and make it positive*/
	n = (n / 10);
	if (n < 0)
	{
		n = n * (-1);
	}
	/*calculate the length of a number and div to divide it with*/
	length = 0;
	div = 1;
	tmp = n;
	while (tmp > 0)
	{
		length += 1;
		div *= 10;
		tmp = tmp / 10;
	}
	/*make div one digit shorter than length*/
	div = div / 10;
	while (div >= 1)
	{
		_putchar(n / div + '0');
		n = n / n % div;
		div /= 10;
	}
	_putchar(last_digit + '0');
}
