#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *starting with the first character
 * @str: every other character of a string
 * Return: print
 */
void puts2(char *str)
{
	int k = 0;

	for (; str[k] != '\0'; k++)
	{
		if ((k % 2) == 0)
			_putchar(str[k]);
		else
			continue;
	}

	_putchar('\n');
}
