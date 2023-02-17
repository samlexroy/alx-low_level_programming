#include <stdio.h>

/**
 * main - the main function
 *
 * Return: success after 0
 */


int main(void)

{
	printf("Size of a char: %lu byte(s\n)", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
