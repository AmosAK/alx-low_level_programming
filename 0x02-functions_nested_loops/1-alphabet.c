#include "main.h"

/**
 * print_alphabet - Prints alphabets in all lowercases followed by new line
 *
 * Return: Always return to zero if no error
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
