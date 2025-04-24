#include "shell.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char *find_path(char *command)
{
	char *path = getenv("PATH");
	char *dir, *full_path;
	size_t len;

	if (!path || !command)
		return (NULL);

	dir = strtok(path, ":");
	while (dir != NULL)
	{
		len = strlen(dir) + strlen(command) + 2;
		full_path = malloc(len);
		if (!full_path)
			return (NULL);

		snprintf(full_path, len, "%s/%s", dir, command);
		if (access(full_path, X_OK) == 0)
			return (full_path);

		free(full_path);
		dir = strtok(NULL, ":");
	}
	return (NULL);
}
