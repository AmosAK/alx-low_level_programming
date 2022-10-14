#include <stdio.h>
/**
 *main - Entry point for program to specify
 *
 *Return: Always returns to zero if no error
 */
int main(void)
{
	int i;
	float f;
	char c;
	long int li;
	long long int lli,

	printf("Size of an int: %lu. \n", (unsigned long)sizeof(i));
	printf("Size of a float: %lu. \n", (unsigned long)sizeof(f));
	printf("Size of a char: %lu. \n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu. \n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu. \n", (unsigned long)sizeof(lli));
	
	return (0);
}
