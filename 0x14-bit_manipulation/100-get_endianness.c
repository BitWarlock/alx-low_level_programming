#include "main.h"

/**
* get_endianness - function that checks the endianness.
* Return: 0 if big endian, else 1.
*/

int get_endianness(void)
{
	int	n;

	n = 1;
	if (* (char *)&n == 1)
		return (1);
	return (0);
}
