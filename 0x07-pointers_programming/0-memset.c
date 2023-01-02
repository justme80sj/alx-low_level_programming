#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ik

	for (k = 0; k < n; k++)
		s[k] = b;
	return (s);
}
