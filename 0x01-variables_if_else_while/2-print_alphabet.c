#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: a program that prints only alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
