#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<string.h>
#include <sys/wait.h>

extern char **environ;

int _putchar(char c);
int _strlen(char *string);
void printline(char *string);
int display_prompt(void);
int file_exist(char *string);
char *get_path(char *filename);
void exec_cmd(char **filepath, char **environ);
char **con_args(char *string, char *delim);
void free_pointer(char **arr);
int launch(char *buffer);

#endif
