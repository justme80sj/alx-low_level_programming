#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */

void print_alphabet_x10(void)
{

	int k, co;

	co = 0;

	while (co < 10)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		co++;
		_putchar('\n');
	}
}
