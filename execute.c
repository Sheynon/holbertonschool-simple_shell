#include "shell.h"

/**
 * execute_command - Forks and executes the command if possible
 * @command: the command entered by the user
 */
void execute_command(char *command)
{
	pid_t pid;
	int status;
	char *argv[64];
	char *token;
	char *path;
	int i = 0;


	token = strtok(*command, " ");
	while (token != NULL && i < 63)
	{
		argv[i++] = token;
		token = strtok(NULL, " ");
	}

	argv[i] = NULL;

	if (argv[0] == NULL)
		return;

	path = find_command(argv[0]);
	if (path == NULL)
	{
		write(STDERR_FILENO, "./shell: command not found\n", 28);
		return;
	}

	pid = fork();
	if (pid == 0)
	{
		execve(path, argv, environ);
		perror("./shell");
		free(path);
		exit(EXIT_FAILURE);
	}

	else if (pid > 0)
	{
		waitpid(pid, &status, 0);
		free(path);
	}

	else
	{
		perror("fork");
		free(path);
	}
}
