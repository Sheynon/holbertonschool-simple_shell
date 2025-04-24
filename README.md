#  c - Simple shell 1.0 final



## Description

The Simple Shell project is a simplified version
in C designed to execute basic commands through 
an easy and intuitive interface, with the goal 
of providing users with an optimal experience.

## shell commands 

| Commande  | Description                            |
|-----------|----------------------------------------|
| `exit`    | Exit shell                             |
| `ls`      | listin fille and repertorie            |
| `ls -l`   | list in detail form                    |
| `pwd`     | display absolute format                |

## list fille 

| fille     | Description                                                                       |
|-----------------------------------------------------------------------------------------------|
| `mainc.c`         | Contains the main function that manages the shell                         |
| `shell.h`         | Declares prototypes of functions used in the shell and global constants   |
| `_strdup.c`       | Implement a function to duplicate a string                                |
| `env.c`           | Contains functions to display system environment variables                | 
| `exec.c`          | Manages command execution using system calls                              |
| `path_handler.c`  | Contains functions for manipulating paths to executable programs.         |
| `tokenizer.c`     | Implement functions to split a command line                               |
| `utils.c`         | Contains utility functions for handling strings                           |
