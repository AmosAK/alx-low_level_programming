#include <stdio.h>
/**
 *main - Entry point for program to specify
 *
 *Return: Always returns to zero if no error
 */
int main(void)
{
	printf("Size of a float: %lu. \n", (unsigned long)sizeof(float));
	printf("Size of a char: %lu. \n", (unsigned long)sizeof(char));
	printf("Size of a long int: %lu. \n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu. \n", (unsigned long)sizeof(long long int));
	printf("Size of an int: %lu. \n", (unsigned long)sizeof(int));
	return (0);
}
