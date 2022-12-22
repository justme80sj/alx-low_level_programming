#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of int
 * @a: content
 * @n: elements of content
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int x, temp;

	for (x = 0; x < n; x++)
	{
		n--;
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
	}
}
