#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using sizeof to print the size of various types
 *
 * Return: Alawys 0 (success)
*/

int main(voi)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
