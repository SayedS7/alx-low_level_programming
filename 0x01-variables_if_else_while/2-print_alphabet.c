#include <stdio.h>

/**
 * main - entry point
 * Description: 'print alphabet lowercase'
 * Return: always 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
