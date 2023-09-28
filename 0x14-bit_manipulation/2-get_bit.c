#include "main.h"

/**
* get_bit - function that returns value in a given index.
* @n: integer.
* @index: index.
*
* Return: the value of the bit, -1 otherwise.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
