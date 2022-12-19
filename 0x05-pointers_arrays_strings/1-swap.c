#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @x: input x
 * @y: input y
 * Return: integers
 */
void swap_int(int *x, int *y)
{
	int n;

	n = *x;
	*x = *y;
	*y = n;
}
