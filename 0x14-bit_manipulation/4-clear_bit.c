#include "main.h"

/**
* clear_bit - function that sets the value of a bit to 0 at an index.
* @n: pointer to thenumber.
* @index: number index.
*
* Return: if success 1, otherwise 0.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
