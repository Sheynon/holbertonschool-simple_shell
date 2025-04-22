#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "execute.h"

/**
 * execute - function to execute a command
 * @args: pointer to the command to execute
 */

void execute(char **args)
{
	pid_t pid = fork();

	if (pid == 0)
	{
		execvp(args[0], args);
		perror("execvp");
		exit(1);
	}
	else if (pid > 0)
		waitpid(pid, NULL, 0);
	else
		perror("fork");
}
