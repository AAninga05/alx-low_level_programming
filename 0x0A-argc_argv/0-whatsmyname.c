#include <stdio.h>
/**
 * main - function that prints program name
 * @argc: number of command line arguements
 * @argv: array containing program command line
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf(" %s\n", *argv);
	}
	return (0);
}
