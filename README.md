#  c - Simple shell 1.0 final



## Description

The Simple Shell project is a simplified version
in C designed to execute basic commands through 
an easy and intuitive interface, with the goal 
of providing users with an optimal experience.

## Internal shell commands 

| Commande  | Description                            |
|-----------|----------------------------------------|
| `exit`    | Exits the shell                        |
| `cd`      | Changes directory                      |
| `env`     | Displays environment variables         |
| `setenv`  | Sets an environment variable           |
| `unsetenv`| Removes an environment variable        |

## exanple 

$ ./test
$ ls -l
total 88
-rw-r--r-- 1 sens003 sens003   195 Apr 24 13:12 AUTHORS
-rw-r--r-- 1 sens003 sens003   674 Apr 24 15:58 README.md
-rwxr-xr-x 1 sens003 sens003   329 Apr 24 13:12 _strdup.c
-rwxr-xr-x 1 sens003 sens003   648 Apr 24 13:12 env.c
-rwxr-xr-x 1 sens003 sens003   631 Apr 24 15:31 exec.c
-rwxr-xr-x 1 sens003 sens003 17328 Apr 24 13:12 flo_in_the_shell
-rwxr-xr-x 1 sens003 sens003   704 Apr 24 13:12 main.c
-rwxr-xr-x 1 sens003 sens003   851 Apr 24 13:12 man_1_simple_shell
-rw-r--r-- 1 sens003 sens003   268 Apr 24 13:12 manshell.1
-rwxr-xr-x 1 sens003 sens003   714 Apr 24 15:19 path_handler.c
-rwxr-xr-x 1 sens003 sens003   585 Apr 24 13:12 shell.h
-rwxr-xr-x 1 sens003 sens003 17264 Apr 24 15:54 test
-rwxr-xr-x 1 sens003 sens003   443 Apr 24 13:12 tokenizer.c
-rwxr-xr-x 1 sens003 sens003   953 Apr 24 13:12 utils.c
$ ls
AUTHORS  README.md  _strdup.c  env.c  exec.c  flo_in_the_shell  main.c  man_1_simple_shell  manshell.1  path_handler.c  shell.h  test  tokenizer.c  utils.c
$ pwd
/home/sens003/holbertonschool-simple_shell
$

