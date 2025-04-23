#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * handle_builtins - Function to handle builtin command
 * @args: Pointer to the array where the command is writed bu user
 *
 * Return: 1 for exit 0 for env
 */

int handle_builtins(char **args)
{
	if (_strcmp(args[0], "exit") == 0)
	{
		return (1);
	}
	if (_strcmp(args[0], "env") == 0)
	{
		int i;

		for (i = 0; environ[i]; i++)
			printf("%s\n", environ[i]);
		return (0);
	}
	return (0);
}
