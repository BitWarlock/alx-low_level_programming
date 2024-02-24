#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index.
* @n - number to change its bit.
* @index - index of the bit to change.
* Return: 1 if success, -1 otherwise.
*/

int set_bit(unsigned long int *a, unsigned int i)
{
	if (i >= (sizeof(unsigned long int) * 8))
		return (-1);
	*a ^= (1 << i);
	return (1);
}
//
// #include <stdio.h>
// #include "main.h"
//
// /**
//  * main - check the code
//  *
//  * Return: Always 0.
//  */
// int main(void)
// {
//     unsigned long int n;
//
//     n = 1024;
//     set_bit(&n, 5);
//     printf("%lu\n", n);
//     n = 0;
//     set_bit(&n, 10);
//     printf("%lu\n", n);
//     n = 98;
//     set_bit(&n, 0);
//     printf("%lu\n", n);
//     return (0);
// }
