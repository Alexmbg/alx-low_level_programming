#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Description: using the main function
 * this program prints types of the data type
 * Return: 0
 */
int main(void)
{
	char A_character;
	int An_integer;
	long A_long;
	long long A_long_long;
	float A_float;

	printf("Size of a char:	%ld byte(s)\n", sizeof(A_character));
	printf("Size of an integer: %ld byte(s)\n", sizeof(An_integer));
	printf("Size of a long: %ld bytes(s)\n", sizeof(An_integer));
	printf("Size of a long long: %ld byte(s)\n", sizeof(A_long_long);
	printf("Size of a float: %ld byte(s)\n", sizeof(A_float);
	return(0);
}
