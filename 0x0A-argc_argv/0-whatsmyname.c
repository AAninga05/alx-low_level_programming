#include <stdio.h>
/**
 * main - function that prints program name
 * @argc: number of command line arguements
 * @argv: array containing program command line
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf(" %s\n", *argv);
	return (0);
}
