#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the Simple Shell Program
 *
 * Return: 0 for success
 */

int main(void)
{
	char *line = NULL;
	char **args = NULL;
	int status = 1;

	while (status)
	{
		printf("> ");
		line = read_line();
		if (!line)
		{
			printf("\n");
			break;
		}

		args = parse_line(line);
		if (!args || !args[0])
		{
			free(line);
			free(args);
			continue;
		}

		if (handle_builtins(args))
			status = 0;
		else
			execute(args);
		free(line);
		free(args);
	}
	return (0);
}
