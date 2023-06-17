#include<stdio.h>
/**
 * main - prints all letters of the alphabet in reverse order
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
