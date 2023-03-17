#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 * description - assign a random number to the variable n each time executed
 * Return: always 0 (successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
