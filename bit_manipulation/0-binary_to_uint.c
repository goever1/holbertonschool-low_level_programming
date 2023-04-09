#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: the binary number
 * Return: converted number, 0 if the string is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			ret += (b[i] - '0') << j;
			i--;
			j++;
		}
		else
			return (0);
	}
	return (ret)
}
