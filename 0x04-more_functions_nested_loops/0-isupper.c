#include "main.h"

/**
 * _isupper - checks if character is uppercase or not.
 *@c: character.
 *
 * Return: 1 if uppercase, 0 if not.
 */

int	_isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
