#include<stdio.h>

/**
 * main - Entnry point
 * Description: print all single digit numbers
 * Return: always 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
