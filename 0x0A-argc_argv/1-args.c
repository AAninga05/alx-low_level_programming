#include <stdio.h>
/**
 * main - function that prints number of arguements
 * passed to it
 * @argc: number of command line arguements
 * @argv: array containing program command line
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
