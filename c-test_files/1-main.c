#include <stdio.h>

/**
 * main - print the address of variables
 * Return: 0
 */

int main(void)

{
	char c;
	int n;

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);

	return (0);
}
