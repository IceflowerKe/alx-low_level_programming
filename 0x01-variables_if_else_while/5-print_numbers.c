#include <stdio.h>
/**
 * main - entry point
 * description -  prints all single digit numbers of base 10 starting from 0
 * Return: always 0 (successful)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
