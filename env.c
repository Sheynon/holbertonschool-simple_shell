#include "shell.h"

/**
 * print_env - Prints the environment
 */
void print_env(void)
{
	int i = 0;

	while (environ[i])
	{
		write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}

/**
 * _getenv - Gets an environment variable
 * @name: Name of the variable
 * Return: Value of variable or NULL
 */
char *_getenv(const char *name)
{
	int i, j;
	size_t len = _strlen(name);

	for (i = 0; environ[i]; i++)
	{
		for (j = 0; j < (int)len; j++)
		{
			if (environ[i][j] != name[j])
				break;
		}
		if (j == (int)len && environ[i][j] == '=')
			return (_strdup(environ[i] + len + 1));
	}
	return (NULL);
}
