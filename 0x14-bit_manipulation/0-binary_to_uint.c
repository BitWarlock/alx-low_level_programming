#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int	ui;
	int	len;
	int	base;

	len = -1;
	base = 1;
	ui = 0;
	if (!b)
		return (0);
	while (b[++len])
		;
	while (len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			ui += base;
		base *= 2;
	}
	return (ui);
}
