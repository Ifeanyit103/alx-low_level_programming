#include <stdio.h>

int main(void)
{
	int n;
	int a[5], int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * new line of code
	 * Note:
	 * - You are not allowed to use the variable a
	 * - You are not allowed to modify the variable p
	 * - Only one statement
	 * - not allowed to code anything else than the line of expected line of code
	 */

	*(p + 5) = 98;
	/* ...so that this prints 98\n */

	printf("a[2] = %d\n", a[2]);
	return (0);
}
