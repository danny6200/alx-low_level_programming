/**
 * print_chessboard - prints an array of 8x8
 * @a: array of size 8x8
 *
 * Return: nothing
 */
#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
