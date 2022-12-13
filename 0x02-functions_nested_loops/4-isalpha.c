#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @g: single letter input
 * Return: 1 if g is a letter (lower or uppercase), 0 otherwise
 */

int _isalpha(int g)
{
	if (((g >= 'a') && (g <= 'z')) || ((g >= 'A') && (g <= 'Z')))
		return (1);
	else
		return (0);
}
