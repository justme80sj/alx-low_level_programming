#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int j = 0;

	for (; str[j] != '\0'; j++)
	{
		if ((j % 2) == 0)
			_putchar(str[j]);
		else
			continue;
	}
	_putchar('\n');
}
