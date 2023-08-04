/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to a binary string
 *
 * Return: value of the binary string in unsigned int
 */
#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
			n = (n * 2) + (b[i] - '0');
		else
			return (0);
		i++;
	}
	return (n);
}
