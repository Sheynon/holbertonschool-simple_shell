#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "read_line.h"
#include "parse_line.h"
#include "execute.h"
#include "builtins.h"
#include "utils.h"

/**
 * main - entry point of the program
 *
 * Return: 0 for success
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char **args;

	while (1)
	{
		printf("> ");
		read = read_line(&line, &len);
		if (read == -1)
			break;
		if (line[0] == '\0')
			continue;

		args = parse_line(line);
		if (execute_builtin(args) == -1)
		{
			free_args(args);
			break;
		}

		if (strcmp(args[0], "cd") != 0 && strcmp(args[0], "exit") != 0)
			execute(args);
		free_args(args);
	}
	free(line);
	return (0);
}
