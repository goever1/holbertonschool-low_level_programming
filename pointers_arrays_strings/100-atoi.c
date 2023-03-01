#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - Change the string to the number that the string contains
 * @s: It is poiting the string
 *
 * Return: the number in the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	
	unsigned int r = 0;
	
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] >= '0' && s[i] <= '9')
			r = r * 10 + (s[i] - '0');
		else if (s[i] == '-')
			sign = -1;
	}
	return (sign * r);
}
