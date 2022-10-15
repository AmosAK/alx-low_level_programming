#include <stdio.h>

/**m
 *main - Entry point for program
 *
 *Return: as zero if no error is encountered
 */
int main(void)
{
	char z;
	
	for (z = '0'; z <= '9'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
