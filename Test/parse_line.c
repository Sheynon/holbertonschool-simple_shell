#include "shell.h"
#include <stdlib.h>
#include <string.h>

/**
 * parse_line - Function so cut the line in an array
 * @line: pointer to the line to cut
 *
 * Return: An array args with every argument from the line
 * using a space, a tabulation, a new line or a carriage return
 */

char **parse_line(char *line)
{
	char **tokens = malloc(64 * sizeof(char *));
	char *token;
	int i = 0;

	if (!tokens)
		return (NULL);

	token = strtok(line, " \t\r\n");
	while (token)
	{
		tokens[i++] = token;
		token = strtok(NULL, " \t\r\n");
	}
	tokens[i] = NULL;
	return (tokens);
}
