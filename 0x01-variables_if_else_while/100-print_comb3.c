#include <stdio.h>
#include <unistd.h>

/**
 *main - Entry point
 *
 *Return - Always return to zero if no error is encountered
 */
int main(void)
{
	int a, b;

	for (a = 10; a <= 18; a++)
	{
		for (b = 11; b <= 19; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != 18 || b != 19)
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
