#include "main.h"

int len(char *s);
int check(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * len - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int len(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += len(s + l);
	}

	return (l);
}

/**
 * check - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @l: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int check(char *s, int l, int index)
{
	if (s[index] == s[l / 2])
		return (1);

	if (s[index] == s[l - index - 1])
		return (check(s, l, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = len(s);

	if (!(*s))
		return (1);

	return (check(s, len, index));
}
