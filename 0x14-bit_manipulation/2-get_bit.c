#include "main.h"

/**
* get_bit - function that returns the value of a bit at a given index.
* @n: unsigned long int.
* @index: the index to check.
* Return: value of index or -1.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((1 << index) & n)
		return (1);
	return (0);
}
