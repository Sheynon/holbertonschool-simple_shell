#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_line - Function to read and stock a line given by the user
 *
 * Return: content of line
 */

char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	nread = getline(&line, &len, stdin);
	if (nread == -1)
	{
		free(line);
		return (NULL);
	}
	line[nread - 1] = '\0';
	return (line);
}
