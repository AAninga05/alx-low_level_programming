#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: pointer to chessboard
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 48; i < 56; i++)
	{
		for (j = 48; i < 56; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
