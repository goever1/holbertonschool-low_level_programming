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
	
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		r = r * 10 + (s[i] + '0');
	}
	return(sign * r);
}