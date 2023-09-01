#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers.
 * @n: the number of elements to swap
 * Return: void.
 */

void	reverse_array(int *a, int n)
{
	int	start;
	int	tmp;
	int	end;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
