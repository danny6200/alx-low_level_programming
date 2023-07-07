#include "main.h"
/**
 * times_table - prints times table from 0 to 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	int sep = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (sep > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			sep++;

			if (i * j > 9)
			{
				int d1 = (i * j) / 10;
				int d2 = (i * j) % 10;

				_putchar(d1 + '0');
				_putchar(d2 + '0');
			}
			else
			{
				_putchar((i * j) + '0');
			}
		}
		_putchar('\n');
	}

}

