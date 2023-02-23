#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - Prints all numbers from n to 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			if (n > 0)
			{
				printf("%d", n);
				n++;
			}
			else
			{
				printf("%d", n);
				n--;
			}
		}
		else if (n > 98) 
		{
			printf("%d", n);
			n--;
		}
			printf(',');
			printf(' ');
	}
	printf("%d", n);
	printf(' ')
}
