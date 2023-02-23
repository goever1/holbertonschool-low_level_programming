#include "main.h"
/**
 * _isalpha - checks for lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 && c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
