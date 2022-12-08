#include <stdio.h>
/**
 * main - Entry
 * Return Always 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
       	printf("Size of an int: %i bytes(s)\n", sizeof(int));
	printf("Size of an long int: %i bytes(s)\n", sizeof(long int));
	printf("Size of an long long int: %i bytes(s)\n", sizeof(long long int));
	printf("Size of an float: %i bytes(s)\n" ,sizeof(float));
	return (0);
}
