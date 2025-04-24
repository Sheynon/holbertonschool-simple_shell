#include "shell.h"

/**
 * _strdup - Duplicates a string
 * @s: String to duplicate
 * Return: Pointer to new string
 */
char *_strdup(const char *s)
{
	char *dup;
	int len = _strlen(s);
	int i;

	dup = malloc(len + 1);
	if (!dup)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = s[i];

	dup[len] = '\0';
	return (dup);
}
