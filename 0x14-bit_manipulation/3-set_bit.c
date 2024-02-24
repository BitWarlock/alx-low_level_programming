#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index.
* @a: number to change its bit.
* @i: index of the bit to change.
* Return: 1 if success, -1 otherwise.
*/

int set_bit(unsigned long int *a, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	*a ^= (1 << i);
	return (1);
}
