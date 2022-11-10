#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: copy string
 * @src: send string
 * @n: number of char to be copied
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int k;
	int m;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	m = 0;
	while (src[m] != '\0' && m < n)
	{
		dest[k] = src[m];
		k++;
		m++;
	}
	dest[k] = '\0';
	return (dest);
}
