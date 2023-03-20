#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int ko, lo;

	for (ko = 0; dest[ko] != '\0'; ko++)
	{
	}

	for (lo = 0; lo < n; lo++)
	{
		dest[ko + lo] = src[lo];
		if (src[lo] == '\0')
			lo = n;
	}

	return (dest);
}
