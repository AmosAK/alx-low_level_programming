#include <stdio.h>


/**
 *main - Entry point of program
 *
 *Return: as zero as long as no issue is encountered
 */
int main(void)
{
	char l;
	char U;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (U = 'A'; U <= 'Z'; U++)
	{
		putchar(U);
	}
	putchar('\n');
	return (0);
}
