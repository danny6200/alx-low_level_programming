#include<stdio.h>
/**
 * main - prints all hexadecimal values
 *
 * Return: 0 after a successful execution
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar('0' + n);   /* '0' = = 48 */
		n++;
	}

	while (c < 'g')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
