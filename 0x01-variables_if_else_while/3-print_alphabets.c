#include <stdio.h>
/**
 * main - Entry poit
 * Description: 'print alphabet lowercase and uppercase'
 * Return: always 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
