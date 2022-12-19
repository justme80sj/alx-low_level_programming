#include "main.h"
/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: string and in reverse
 */
	void rev_string(char *s)
	{
		char rev = s[0];
		int fcounter = 0;
		int k;

		while (s[fcounter] != '\0')
			fcounter++;

		for (k = 0; k < fcounter; k++)
		{
			fcounter--;
			rev = s[k];
			s[k] = s[fcounter];
			s[fcounter] = rev;
		}
	}
