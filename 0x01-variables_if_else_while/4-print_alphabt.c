#include<stdio.h>
/**
 * main - prints all alphabets except "q" and "e"
 *
 * Return: 0 after successful execution
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
