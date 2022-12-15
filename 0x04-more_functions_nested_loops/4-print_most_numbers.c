#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
	int t;

	for (t = 0; t <= 9; t++)
	{
		if ((t == 2) || (t == 4))
			continue;
		else
			_putchar(t + '0');
	}
	_putchar('\n');
}
