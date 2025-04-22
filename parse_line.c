#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parse_line.h"

#define INIT_SIZE 10

/**
 * parse_line - program to separate the line into multiple argument
 * @line: the line to separate
 *
 * Return: return the content of args
 */

char **parse_line(char *line)
{
	int size = INIT_SIZE;
	int i = 0;
	char **args = malloc(size * sizeof(char *));
	char *word;

	if (args == NULL)
	{
		perror("malloc");
		exit(1);
	}

	word = strtok(line, " ");
	while (word != NULL)
	{
		if (i >= size - 1)
		{
			size *= 2;
			args = realloc(args, size * sizeof(char *));
			if (args == NULL)
			{
				perror("realloc");
				exit(1);
			}
		}
		args[i] = strdup(word);
		if (args[i] == NULL)
		{
			perror("strdup");
			exit(1);
		}
		i++;
		word = strtok(NULL, " ");
	}
	args[i] = NULL;
	return (args);
}
