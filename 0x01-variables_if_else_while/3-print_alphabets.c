#include <stdio.h>
/**
 * main - main block
 * Description: print the alphabet in lowercase and uppercase
 * follow by new line
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	c = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++
	}
	putchar('\n');
	return (0);
}
