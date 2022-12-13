#include "hmain.h"

/**
 * print_sign - a function that prints the sign of a number
 * @t: number input
 * Return: 1 prints '+' if t > 0, 0 prints '0' if t = 0, -1 prints '-' if t < 0
 */

int print_sign(int t)
{
	if (t > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (t == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
