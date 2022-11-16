#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: will be entire string
 * @needle: will be substring
 * Return: beginning of located substring
 * otherwise NULL if substring not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *ndl;

	while (*haystack != '\0')
	{
		hay = haystack;
		ndl = needle;

		while (*haystack != '\0' && ndl != '\0' && *haystack == *ndl)
		{
			haystack++;
			ndl++;
		}
		if (!*ndl)
			return (hay);
		haystack - hay + 1;
	}
	return (0);
}
