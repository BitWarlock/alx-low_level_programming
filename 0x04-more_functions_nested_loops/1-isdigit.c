#include "main.h"

/**
 * _isdigit - checks if character is a digit or not.
 *
 * @c: character.
 * Return: 1 if it's a digit, 0 if not.
 */

int	_isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
