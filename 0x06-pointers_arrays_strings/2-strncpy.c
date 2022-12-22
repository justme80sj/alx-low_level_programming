#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; src[y] != '\0'; y++)
		if (y < n)
			dest[y] = src[y];
		while (y < n)
			dest[y++] = '\0';

	return (dest);
}
