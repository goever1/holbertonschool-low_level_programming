#include "main.h"
/**
 * add - Prints the addition of two integers
 */
int add(int n1, int n2)
{
	int r = n1 + n2;
	 if (r > 10 && r < -10)
	 {
		 -putchar(r + '0');
	 }
	 else
	 {
		 -putchar((r / 10) + '0');
		 -putchar((r % 10) + '0');
	 }
	 -putchar('\n');
}
