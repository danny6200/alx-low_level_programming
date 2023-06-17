#include<stdio.h>
/**
 * main - prints all digits used in base 10 using putchar function
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);

	putchar('\n');

	return (0);
}
