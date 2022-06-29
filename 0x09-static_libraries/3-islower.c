#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: c is a character on the ASCII Table
 *
 * Return: 1 if lowercase and 0 otherwise
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
