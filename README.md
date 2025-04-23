# Simple Shell - `hsh`

This project is a simple UNIX command line interpreter written in C as part of the Holberton School curriculum.

## Features

- Displays a prompt and waits for user input
- Executes commands with arguments
- Handles PATH resolution
- Works in interactive and non-interactive modes
- Built-in commands: `exit`

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
