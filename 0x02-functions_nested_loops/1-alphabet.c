#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase
 * followed by a new line.
 *
 * Return: Always void (Success)
 */

void print_alphabet(void)

{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar('\n');
		letter++;
	}
	_putchar('\n');
}
