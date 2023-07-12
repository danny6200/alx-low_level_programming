/**
 * str_concat - concats two strings in a newly allocated memory
 * @s1: string 1 in the concatenation
 * @s2: string 2 in the concatenation
 *
 * Return: pointer to the concatenated string
 */
#include "main.h"
#include <stddef.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i, j;
	char *concat = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];
	concat[len1 + len2] = '\0';

	return (concat);
}
