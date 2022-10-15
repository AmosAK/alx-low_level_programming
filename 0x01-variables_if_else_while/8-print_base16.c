#include <stdio.h>

/**
 *main - Entry point for program
 *
 *Return: as zero as long as errornot encountered
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 10; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
