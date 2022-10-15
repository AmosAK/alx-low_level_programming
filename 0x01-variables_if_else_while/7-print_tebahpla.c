#include <stdio.h>

/**
 *main - Program entry point
 *
 *Return: as zero if no code is encountered
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
		putchar(r);
	putchar('\n');
	return (0);
}
