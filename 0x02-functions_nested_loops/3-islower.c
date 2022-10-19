#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		for (c = 'A'; c <= 'Z'; c++)
			return (0);
	}
	return (1);
}
