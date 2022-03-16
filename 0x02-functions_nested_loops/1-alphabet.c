#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char ogbu;

	ogbu = 'a';

	while (ogbu <= 'z')
	{
		_putchar(ogbu);
		ogbu++;
	}

	_putchar('\n');
}
