#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "builtins.h"

/**
 * execute_builtin - function to execute builtin command
 * @args: pointer to the array
 *
 * Return: 0 for success, -1 for fail
 */

int execute_builtin(char **args)
{
	if (strcmp(args[0], "exit") == 0)
		return (-1);
	if (strcmp(args[0], "cd") == 0)
	{
		if (args[1] == NULL)
		{
			fprintf(stderr, "cd : expected argument\n");
			return (1);
		}
		else if (chdir(args[1]) != 0)
		{
			perror("cd");
			return (1);
		}
		return (0);
	}
	return (0);
}
