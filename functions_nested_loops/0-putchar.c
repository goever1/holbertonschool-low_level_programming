#include "main.h"
/**
 * main - Prints _putchar
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	char *co = "_putchar";

	while (*co)
	{
		_putchar(*co);
	co++;
	}
	_putchar('\n')
	return 0;
}
