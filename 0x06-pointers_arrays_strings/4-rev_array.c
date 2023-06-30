#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array of integer elements
 * @n: number of elements in array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
