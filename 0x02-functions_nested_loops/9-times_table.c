#include "main.h"

/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * rrww = row, coll = column, d = digits of current result
 * Return: times table
 * add extra space past single digit
 */

void times_table(void)
{
	int rrww, coll, d;

	for (rrww = 0; rrww <= 9; rrww++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (coll = 1; coll <= 9; coll++)
		{
			d = (rrww * coll);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (coll < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
