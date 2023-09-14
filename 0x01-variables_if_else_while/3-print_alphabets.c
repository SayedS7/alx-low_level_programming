#include <stdio.h>

/**
 * main - Entry poit
 * Description: 'print alphabet lowercase and uppercase'
 * Return: always 0
*/
int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
