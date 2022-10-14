#include <stdio.h>


/**
 *main - Entry point for code
 *
 *Return: to zero if no error is encountered
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
