#include "shell.h"

/**
 * main - Entry point of the shell
 * Return: 0 on success
 */
int main(void)
{
	char *line = NULL;
	char **argv = NULL;
	size_t len = 0;
	ssize_t nread;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "$ ", 2);

		nread = getline(&line, &len, stdin);
		if (nread == -1)
		{
			free(line);
			exit(EXIT_SUCCESS);
		}

		if (line[nread - 1] == '\n')
			line[nread - 1] = '\0';

		argv = tokenize_line(line);
		if (argv == NULL || argv[0] == NULL)
		{
			free(argv);
			continue;
		}

		if (_strcmp(argv[0], "exit") == 0)
			break;
		if (_strcmp(argv[0], "env") == 0)
			print_env();
		else
			execute_command(argv);

		free(argv);
	}
	free(line);
	return (0);
}
