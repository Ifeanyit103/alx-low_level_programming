#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @src: input
 * @dest: output
 * @n: number to be string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (src[k] != '\0' && k < n)
	{
		dest[k] = src[k];
		k++;
	}

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
