#include <stdio.h>


/**
 *main - Program entry point
 *
 *Return: as zero is no issue is encountered
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
			continue;
		putchar(l);
	}
	putchar('\n');
	return (0);
}
