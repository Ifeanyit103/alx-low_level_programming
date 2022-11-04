#include "main.h"
int check_prime(int n, int i);

/**
 * check_prime - prime numbers
 * @n: number
 * @i: iterator
 * Return: in
 */

int check_prime(int n, int i)
{
	if (i < 2 || i % n == 0)
		return (0);
	else if (n > i / 2)
		return (1);
	else
		return (check_prime(n + 1, i));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(n, 2));
}
