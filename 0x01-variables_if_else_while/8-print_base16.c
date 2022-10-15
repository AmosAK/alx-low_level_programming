#include <stdio.h>

/**
 *main - Entry point for program
 *
 *Return: as zero as long as errornot encountered
 */
int main(void)
{
	int l;
	char hexadec[] = "0123456789abcdef";

	for (l = 10; l < 16; l++)
	{
		putchar(hexadec[l]);
	}
	putchar('\n');
	return (0);
}
