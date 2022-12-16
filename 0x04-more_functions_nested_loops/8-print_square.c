#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int ko, to;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ko = 1; ko <= size; ko++)
		{
			_putchar('#');
			for (to = 2; to <= size; to++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
