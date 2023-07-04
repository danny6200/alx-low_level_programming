/**
 * print_diagsums - adds up all numbers along the diagonals
 * @a: pointer to array
 * @size: gives the size of the array
 *
 * Return: nothing
 */
#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int lsum = 0;
	int rsum = 0;

	for (i = 0; i < size; i++)
	{
		rsum += a[i * size + i];
		lsum += a[i * size + size - i - 1];
	}
	printf("%d, %d\n", rsum, lsum);
}
