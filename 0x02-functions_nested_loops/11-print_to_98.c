#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function to print natural numbers
 *
 * @n: - function parameter
 * Return: always 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n++;
	}
	printf("98");
	printf("/n");
}
