#include <stdio.h>
#include <stdlib.h>
#include "read_line.h"

/**
 * read_line - function to stock the line of enter by the user
 * @line: pointer to the line to read
 * @len: size of the line to read
 *
 * Return: return the content of the line entered by the user
 */

ssize_t read_line(char **line, size_t *len)
{
	ssize_t nread = getline(line, len, stdin);

	if (nread > 0 && (*line)[nread - 1] == '\n')
	{
		(*line)[nread - 1] = '\0';
		nread--;
	}
	return (nread);
}
