#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @b: single letter input
 * Return: 1 if int b is lowercase, 0 if otherwise
 */

int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
		return (1);
	else
		return (0);
}
