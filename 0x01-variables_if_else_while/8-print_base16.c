#include <stdio.h>
/**
 * main - entry point
 * description - prints all the numbers of base 16 in lowercase
 * Return: always 0 (successful)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (m = 97; m <= 102; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
