#include "shell.h"

/**
 * execute_command - Executes a command
 * @argv: Argument vector
 */
void execute_command(char **argv)
{
	pid_t pid;
	char *path_cmd;

	path_cmd = find_path(argv[0]);
	if (path_cmd == NULL)
	{
		write(STDERR_FILENO, argv[0], _strlen(argv[0]));
		write(STDERR_FILENO, ": command not found\n", 21);
		return;
	}

	pid = fork();
	if (pid == 0)
	{
		if (execve(path_cmd, argv, environ) == -1)
		{
			perror("execve");
			free(path_cmd);
			exit(EXIT_FAILURE);
		}
	}
	else if (pid > 0)
		wait(NULL);
	else
		perror("fork");

	free(path_cmd);
}
