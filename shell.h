#ifndef SHELL_H
#define SHELL_H

extern char **environ;

char *read_line(void);
char **parse_line(char *line);
int execute(char **args);
int handle_builtins(char **args);
int _strcmp(const char *s1, const char *s2);
char *find_in_path(const char *cmd);

#endif
