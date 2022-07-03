#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: A program that prints all number
 * of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar(10);
	return (0);
}
