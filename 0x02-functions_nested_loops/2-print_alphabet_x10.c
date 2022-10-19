#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int ten;
	char let;

	while (ten++ <= 9)
	{
		for (let = 'a'; let <= 'z'; let++)
			_putchar(let);
		_putchar('\n');
	}
}
