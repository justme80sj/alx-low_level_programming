#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input one
 * @s2: input two
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int z;

	for (z = 0; s1[z] != '\0' && s2[z] != '\0'; z++)
	{
		if (s1[z] != s2[z])
			return (s1[z] - s2[z]);
	}
	return (0);
}
