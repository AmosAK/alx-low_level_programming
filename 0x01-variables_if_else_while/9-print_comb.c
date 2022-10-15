#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: always return to zero if no issue encountered
 */
int main(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
		if (numb == '9')
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
