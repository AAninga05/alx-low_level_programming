#include <stdio.h>
/**
 * main - function that prints all arguements it receive
 * @argc: number of command line arguements
 * @argv: array containing program command line
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
