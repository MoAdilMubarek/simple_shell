#ifndef SHELL_H
#define SHELL_H
#include <unistd.h>
#include <stdlib.h>

void print(char *str);
void pr_promt(void);
ssize_t input(char *str);
int execcute(char *str);

#endif
