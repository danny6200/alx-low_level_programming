#include<stdio.h>
/**
 * main - prints the alphabets in lower and upper case
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
