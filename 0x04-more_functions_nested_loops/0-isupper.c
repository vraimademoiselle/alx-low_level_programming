#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character.
 * @c: the int for the paramaters of my function
 * Return: 1 if uppercase 0 if lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	return (0);
}
