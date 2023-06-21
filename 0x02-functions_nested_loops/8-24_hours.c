#include "main.h"
/**
 * jack_bauer - prints every minute within 24 hours that is from 00:00 to 23:59
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			int h1 = i / 10;
			int h2 = i % 10;
			int m1 = j / 10;
			int m2 = j % 10;

			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}

}
