#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need
* to flip to get from one number to another.
* @n: integer.
* @m: number to be flipped to.
* Return: number of bits to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int	bits;
	int	i;

	bits = 0;
	i = n ^ m;
	while (i)
	{
		if (i & 1)
			bits++;
		i >>= 1;
	}
	return (bits);	
}
