#include "shell.h"

/**
 * main - Simple UNIX command line interpreter
 *
 * Return: Always 0
 */

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char *prompt = "#cisfun$ ";

	while(1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
		read = getline(&line, &len, stdin);
		if (read == -1)
		{
			free(line);
			write(STDOUT_FILENO, "\n", 1);
			break;
		}
		if (line[read - 1] == '\n')
			line[read - 1] = '\0';

		if (_strlen(line) > 0)
			execute_command(line);
	}
	free(line);
	return (0);
}
