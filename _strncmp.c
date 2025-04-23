#include "shell.h"

/**
 * _strncmp - Compares n characters of two strings
 * @s1: First string
 * @s2: Second string
 * @n: Number of characters to compare
 * Return: Difference
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	while (n && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
