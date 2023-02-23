#include "main.h"
/**
 * add - Prints the addition of two integers
 */
int add(int n1, int n2)
{
	int r = n1 + n2;
	 if (r > 10 && r < -10)
	 {
		 _putchar(r + '0');
	 }
	 else
	 {
		 _putchar((r / 10) + '0');
		 _putchar((r % 10) + '0');
	 }
	 
	 
	 _putchar('\n');
}
