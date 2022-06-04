#include <stdio.h>

 /**
  * main - Prints the alphabets in lowercases
  * Return: Always 0 (success)
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
