/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes in string 2 to be concatenated with string
 * 1
 *
 * Return: pointer to char
 */
#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int len1 = 0;
	int len2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if ((int)n >= len2)
		n = len2;
	concat = malloc((len1 + n + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < (int)n; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';
	return (concat);
}
