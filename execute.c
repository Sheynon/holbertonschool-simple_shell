#include "shell.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * execute - Function to execute a command
 * @args: pointer to the array from where the user writed a command
 *
 * Return: 1 For success
 */

int execute(char **args)
{
	pid_t pid;
	int status;
	char *cmd = args[0];
	char *full_path = find_in_path(cmd);

	if (full_path == NULL)
	{
		fprintf(stderr, "%s: command not found\n", cmd);
		return (1);
	}

	pid = fork();
	if (pid == 0)
	{
		execve(full_path, args, environ);
		perror("execve");
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		perror("fork");
	}
	else
	{
		waitpid(pid, &status, 0);
	}
	free(full_path);
	return (1);
}
