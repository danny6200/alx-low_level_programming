#include<stdio.h>
/**
 * main - prints all posible combos of 3 digits with some exceptions
 *
 * Return: 0 after a successful execution
 */
int main(void)
{
	int i;
	int j;
	int k;
	int sep = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (sep > 0)
				{
					putchar(',');
					putchar(' ');
				}
				sep++;
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
			}
		}
	}
	putchar('\n');
	return (0);
}
