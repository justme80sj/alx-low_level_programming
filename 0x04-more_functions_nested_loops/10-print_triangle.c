#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: sets the size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int k, l;

	if (size > 0)
		for (k = size; k > 0; k--)
		{
			for (l = 1; l <= size; l++)
				if (l >= k)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
