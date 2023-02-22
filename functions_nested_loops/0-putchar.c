#include "main.h"
/**
 * _putchar - is to declrear the function before its use
 *
 * main - Prints _putchar
 *
 * Returns: Always 0 (Success)
 */
int _putchar(char c);

int main(void)
{
	char *co = "_putchar";

	while (*co)
	{
		_putchar(*co);
	co++;
	}
	_putchar('\n');
	return (0);
}
