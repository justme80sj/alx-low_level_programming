#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - paso
 *
 * Return: int 0;
 */
int main(void)
{
	char str[100];
	int k = 0, randNum = 0, suma = 0;

	srand (time(NULL));


	for (k = 0; suma <= 2644; k++)
	{
		randNum = (rand() % 25) + 65;

		str[k] = randNum;
		suma = suma + randNum;
	}

	str[k++] = 2772 - suma;
	str[k++] = '\0';

	printf("%s\n", str);

	return (0);
}
