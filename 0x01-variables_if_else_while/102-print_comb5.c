#include <stdio.h>

/**
 *main- Entry point
 *
 *Return: Always zero if no error is encountered
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99, a++)
	{
		for (b = 0; b <= 99, b++)
		{
			if (a < b)
			{
				putchar('0' + (a / 10));
				putchar('0' + (a % 10));
				putchar(' ');
				putchar('0' + (b / 10));
				putchar('0' + (b % 10));
				if (a != 98 || b != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
