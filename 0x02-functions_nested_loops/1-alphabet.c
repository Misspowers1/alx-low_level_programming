#include "main.h"

/**
 * printr_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void printprint_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n')
}
