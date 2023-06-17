#include<stdio.h>
/**
 * main - prints all possible combos of two two digit numbers
 * with the exception of its variants
 *
 * Return: 0 after a successful execution
 */
int main(void)
{
	int n;
	int m;
	int sep = 0;

	for (n = 0; n < 99; n++)
	{
		for (m = n + 1; m < 99; m++)
		{
			int t1 = n / 10;
			int u1 = n % 10;

			int t2 = m / 10;
			int u2 = m % 10;

			/* places comma and whitespace between the combos */

			if (sep > 0)
			{
				putchar(',');
				putchar(' ');
			}
			sep++;

			putchar('0' + t1);
			putchar('0' + u1); /* This uses ASCII code to display characters */
			putchar(' ');

			putchar('0' + t2);
			putchar('0' + u2);
		}
	}
	putchar('\n');

	return (0);
}
