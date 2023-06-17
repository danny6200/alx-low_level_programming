#include<stdio.h>
/**
 * main - prints all possible combo of single digits
 *
 * Return: 0 after a successful execution
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
