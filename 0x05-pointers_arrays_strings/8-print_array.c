#include "main.h"
#include<stdio.h>
/**
 * print_array - prints all elements of an array with a comma-white
 * space delimiter
 * @a: integer pointer
 * @n: number of elements to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
