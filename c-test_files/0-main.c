#include <stdio.h>

/**
 * main - using sizeof to print the sizes of type float, int and char
 *
 * return: 0
 */

int main(void)
{
	int n;

	printf("size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("size of type of my variable n on my computer: %lu bytes\n", sizeof(n));

	return (0);
}
