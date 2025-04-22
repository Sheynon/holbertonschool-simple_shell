#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

/**
 * handle_error - manage error message
 * @msg: pointer to the message
 */

void handle_error(const char *msg)
{
	perror(msg);
	exit(1);
}

/**
 * free_args - function to always free the array
 * @args: pointer to the array to free
 */

void free_args(char **args)
{
	if (!args)
		return;

	for (int i = 0; args[i] != NULL; i++)
		free(args[i]);
	free(args);
}
