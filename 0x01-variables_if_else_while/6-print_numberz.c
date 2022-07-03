#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints out all numbers from 10
 * to 0 in base 10 without using char variable
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
