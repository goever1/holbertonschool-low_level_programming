#include <stdio.h>
/**
 * main - Pritns the alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ll = 'a';
	char lu = 'A';
	while (ll <= 'z')

	{
		putchar(ll);
		ll++;
	}
	while (lu <= 'Z')
	{
		putchar(lu);
		lu++;
	}
	putchar('\n');
	return (0);
}
