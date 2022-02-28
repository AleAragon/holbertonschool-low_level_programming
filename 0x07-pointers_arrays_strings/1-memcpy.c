#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *           to by @b into that pointed to by @s.
 * @s: A pointer to the memory area to copy @b into.
 * @b: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @b.
 *
 * Return: A pointer to the destination buffer @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
