#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: will be first string
 * @s2: will be second string
 * @n: will be maximum number of bytes of s2 to concatenate to s1
 * Return: NULL if function fails
 * otherwise a pointer to concatenated space in memory
 */

char *string_nconcat(char *s1, char *S2, unsigned int n)
{

	char *concat;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		concat[len++] = s1[index];

	for (index = 0; s2[index] && index <n; index++)
		concat[len++] = s2[index];

	concat[len] = '\0';

	return (concat);
}
