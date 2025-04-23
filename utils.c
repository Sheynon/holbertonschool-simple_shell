#include "shell.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * _strcmp - Function to compare two string of character
 * @s1: Pointer to the string 1
 * @s2: Pointer to the string 2
 *
 * Return: 0 if the string are identical
 * A negative value if s1 < s2
 * A positive value if s1 > s2
 */

int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * find_in_path - function to search of a command in the systems's PATH
 * @cmd: The command to search for
 *
 * Return: A malloc string with the full path of the executable if found,
 * NULL if the command is not found in any PATH directory
 */

char *find_in_path(const char *cmd)
{
	char *path, *token, *full_path;
	size_t len;
	char *path_copy;

	path = getenv("PATH");
	if (!path)
		return (NULL);

	path_copy = strdup(path);
	if (!path_copy)
		return (NULL);

	token = strtok(path_copy, ":");
	while (token)
	{
		len = strlen(token) + strlen(cmd) + 2;
		full_path = malloc(len);
		if (!full_path)
		{
			free(path_copy);
			return (NULL);
		}
		snprintf(full_path, len, "%s/%s", token, cmd);
		if (access(full_path, X_OK) == 0)
		{
			free(path_copy);
			return (full_path);
		}
		free(full_path);
		token = strtok(NULL, ":");
	}

	free(path_copy);
	return (NULL);
}
