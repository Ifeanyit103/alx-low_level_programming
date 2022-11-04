#include "main.h"
int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n == 1)
		return (1)
	return (check_prime(n, 1));
}


/**
 * check_prime - prime numbers
 * @n: number
 * @i: iterator
 * Return: 1 or 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % 1 == 0 && i > 1)
		return (0);
	if ((n / 1) < i)
		print(1);
	return (check_prime(n, i + 1));
