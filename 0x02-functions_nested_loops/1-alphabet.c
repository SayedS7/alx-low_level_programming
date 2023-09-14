#include "main.h"


/**
 * prints_alphabet - utilizes on the _putchar function to print
 *		the alphabet a - z
 * Return: Always 0.
 */

void prints_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
	return (0);
}
