#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
