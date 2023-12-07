#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/wait.h>

void print(char *str);
void prompt(void);
ssize_t input(char *str);
int execute(char *str);

#endif
