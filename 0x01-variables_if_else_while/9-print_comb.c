#include<stdio.h>
/**
 * main - prints all possible combo of single digits
 *
 * Return: 0 after a successful execution
 */
int main(void)
{
	int n = 0;
	int sep1 = 0;
	int sep2 = 0;

	while (n < 10)
	{
		putchar(sep1);
		putchar(sep2);
		putchar('0' + n);
		sep1 = ',';
		sep2 = ' ';
		n++;
	}
	putchar('\n');

	return (0);
}
