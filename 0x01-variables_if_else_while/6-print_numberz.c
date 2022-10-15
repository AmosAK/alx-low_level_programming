#include <stdio.h>

/**
 *main - Entry point for program
 *
 *Return: as zero is no error is encountered
 */
int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
