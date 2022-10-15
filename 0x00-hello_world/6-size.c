#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("size of a char: %lu 1 byte(s)\n", sizeof(char));
	printf("size of an int: %lu 4 byte(s)\n", sizeof(int));
        printf("size of a long int: %lu 8 byte(s)\n", sizeof(long int));
        printf("size of a long long int: %lu 8 byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
        return (0);
}

