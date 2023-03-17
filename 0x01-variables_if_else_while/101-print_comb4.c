#include <stdio.h>
/**
 * main - entry point
 * description -prints all possible different combinations of three digits
 * Return: always 0 (successful)
 */
int main(void)
{
	int n;
	int m;
	int i;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (i = 50; i < 58; i++)
			{
				if (i > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(i);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
