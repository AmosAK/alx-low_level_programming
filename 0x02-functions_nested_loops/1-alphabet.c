#include <unistd.h>
#include "main.h"

/**
 *main- Entry point
 *
 *Return: Always return to zero if no error
 */
int main(void)
{
	char word[15] = "print_alphabet()";
	int i;

	for (i = 0; i < 15; i++)
		putchar(word[i]);
	putchar("\n");
	return (0);
}
