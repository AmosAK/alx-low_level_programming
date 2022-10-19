#include <stdio.h>
#include "main"


/**
 * print_alphabet_x10 - prints 10 times the alphabet in ls with newline
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = '0'; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
	}
	putchar('\n);
}
