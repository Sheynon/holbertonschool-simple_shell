#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

/* Core */
void execute_command(char **argv);
char **tokenize_line(char *line);

/* Path */
char *find_path(char *cmd);

/* Built-ins */
void print_env(void);
char *_getenv(const char *name);

/* Utils */
int _strcmp(const char *s1, const char *s2);
int _strlen(const char *s);
char *_strcpy(char *dest, const char *src);
char *_strcat(char *dest, const char *src);
char *_strdup(const char *s);

#endif
