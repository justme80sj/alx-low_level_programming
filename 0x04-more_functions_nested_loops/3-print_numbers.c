#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int k;

	for (k = 0; k <= 9; k++)
		_putchar(k + '0');
	_putchar('\n');
}
