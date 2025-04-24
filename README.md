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

 File Name           | Description                                                              |
 |---------------------|---------------------------------------------------------------------------|
 | `main.c`            | Contains the main function that manages the shell                        |
 | `shell.h`           | Declares function prototypes and global constants used in the shell      |
 | `_strdup.c`         | Implements a function to duplicate a string                              |
 | `env.c`             | Contains functions to display environment variables                      |
 | `exec.c`            | Handles command execution using system calls                             |
 | `path_handler.c`    | Contains functions for manipulating paths to executable programs         |
 | `tokenizer.c`       | Implements functions to split a command line into tokens                 |
 | `utils.c`           | Contains utility functions for handling strings                          |

 ## instalation of shell

 1. git clone https://github.com/Sheynon/holbertonschool-simple-shell.git

 2. Compile the source code

 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o shell

 3. execute the programe

 ./shell
