#include <stdio.h>

/**
 *main - Entry point for program
 *
 *Return: as zero as long as errornot encountered
 */
int main(void)
{
	int a;
	char b;

	for (a = 58; a < 68; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
	putchar(b);
	}
	putchar('\n');
	return (0);
}
