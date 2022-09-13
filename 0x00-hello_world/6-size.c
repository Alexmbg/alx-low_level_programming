#include <stdio.h>

/**
 * main - Prints The size of data types
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of char: %ld bytes(s)\n", sizeof(c));
	printf("Size of int: %ld byte(s)\n", sizeof(i));
	printf("Size of long: %ld byte(s)\n", sizeof(li));
	printf("size of long long: %ld byte(s)\n",sizeof(lli));
	printf("Size of float: %ld byte(s)\n", sizeof(f));
	return 0;
}
