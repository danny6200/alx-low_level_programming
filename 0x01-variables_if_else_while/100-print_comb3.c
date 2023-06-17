#include<stdio.h>
/**
 * main - prints all combos of 2-digits except combo of same digit
 * and already existing combo
 *
 * Return: 0 after a successful execution
 */
int main(void)
{
	int m = 0;
	int n;
	int sep = 0;

	while (m < 10)
	{
		n = 0;

		while (n < 10)
		{
			if (m != n && m < n)
			{
				if (sep > 0)
				{
					putchar(',');
					putchar(' ');
				}
				sep++;
				putchar('0' + m);
				putchar('0' + n);
			}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
