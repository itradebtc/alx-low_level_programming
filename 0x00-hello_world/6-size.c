#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %zu byte(S)\n", sizeof(char));
	printf("Size of an int: %zu byte(S)\n",	sizeof(int));
	printf("Size of a long int: %zu byte(S)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(S)\n", sizeof(long long int));
	printf("Size of a float: %i byte(S)\n", sizeof(float));
	return (0);
}
