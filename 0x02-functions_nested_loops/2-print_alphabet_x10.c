#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int ten;
	char le;

	while (ten++ <= 9)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar(le);
		_putchar('\n');
	}
}
