#include "main.h"

/**
 * _isalpha - Returns 1 if c is an alphabet Returns 0 otherwise.
 * @c: input for function
 *
 * Return: 1 if alphabet otherwise 0.
 */
int	_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	return (0);
}
