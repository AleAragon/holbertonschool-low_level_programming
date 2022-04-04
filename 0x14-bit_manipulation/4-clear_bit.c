#include "holberton.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t_binary;

	t_binary = (sizeof(*(n)) * 8);
	if (index < t_binary)
	{
		*(n) = (~(1 << index) & *(n));
		return (1);
	}
	return (-1);
}
