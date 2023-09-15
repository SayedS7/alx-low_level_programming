#include<stdio.h>

/**
 * main - entry point
 *
 * dicription: print numbers of base16 in lowercase
 *
 * Return: always 0
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putchar(digit);

		/* after 9 we jump till 96; '*/
		if (digit == 57)
			digit += 39;
		digit++;
	}
	puchar('\n');

	return (0);
}
