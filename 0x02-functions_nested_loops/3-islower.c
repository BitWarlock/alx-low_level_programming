#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase Returns 0 otherwise.
 *
 * Return: 1 if lowercase otherwise 0.
 */
int	_islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	return (0);
}
