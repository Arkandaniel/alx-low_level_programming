#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	double d;
	char c;
	long int l;
	long long int x;
	float f;

	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("The size of a double: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("The size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
