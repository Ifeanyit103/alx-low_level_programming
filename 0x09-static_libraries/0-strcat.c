#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: terminating end
 * @src:  overwriting the terminating null byte (\0) at the end of dest
 * Return: string dest
 */
char *_strcat(char *dest, char *src)
{
	int k;
	int m;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}

	m = 0;
	while (src[m] != '\0')
	{
		dest[k] = src[m];
		k++;
		m++;
	}
	dest[k] = '\0';
	return (dest);
}

