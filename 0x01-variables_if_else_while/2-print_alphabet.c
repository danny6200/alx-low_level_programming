#include<stdio.h>
/**
 * main - prints the alphabets in lower cases
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
