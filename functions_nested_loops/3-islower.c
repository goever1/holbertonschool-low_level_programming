#include "main.h"
/**
 * _islower - Check if the letter in c is uppercase
 *
 * Returns: If is uppercase will return 1 if not will be 0
 */
int _islower(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
