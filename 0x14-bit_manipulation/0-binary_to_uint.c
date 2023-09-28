#include "main.h"

/**
* binary_to_uint -  function that converts a binary number to an unsigned int.
* @b: binary.
*
* Return: unsigned int, 0 otherwise.
*/

unsigned int  binary_to_uint(const char *b)
{
	unsigned int  x;

	for (x = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		x <<= 1;
		x += *b - '0';
	}
	return (x);
}
