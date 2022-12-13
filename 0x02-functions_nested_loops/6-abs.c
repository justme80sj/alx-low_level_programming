#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer
 * @xyz: integer input
 * Return: absolute value of xyz
 */

int _abs(int xyz)
{
	return (xyz * ((xyz > 0) - (xyz < 0)));
}
