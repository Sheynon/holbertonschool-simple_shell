#include "shell.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: Difference between s1 and s2
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * _strlen - Returns the length of a string
 * @s: Input string
 * Return: Length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strcpy - Copies a string
 * @dest: Destination
 * @src: Source
 * Return: dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - Concatenates two strings
 * @dest: Destination
 * @src: Source
 * Return: dest
 */
char *_strcat(char *dest, const char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];

	dest[i] = '\0';
	return (dest);
}
