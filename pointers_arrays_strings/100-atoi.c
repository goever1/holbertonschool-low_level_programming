#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - Change the string to the number that the string contains
 * @s: It is poiting the string
 *
 * return: the number in the string
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, r = 0;
	
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] == '-')
			sign = -1;
		else
			sign = 1;
		if (s[i] > 48 && s[i] < 57)
			r = r * 10 + (s[i] - '0');
		else
			break;
	}
	return(sign * r);
}
