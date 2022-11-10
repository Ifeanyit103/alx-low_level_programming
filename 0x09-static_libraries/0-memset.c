#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: a pointer to the memory area
 * @b: characters to be filled
 * @n: number of byte
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
