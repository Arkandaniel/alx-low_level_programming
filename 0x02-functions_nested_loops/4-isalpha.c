#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetics character
 * @c: parameter
 * Return: 1 for alphabets 0 otherwise
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'))
}
