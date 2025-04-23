#include "shell.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
