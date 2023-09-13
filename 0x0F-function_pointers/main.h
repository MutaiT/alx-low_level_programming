#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

void print_name(char *name, void (*p)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

#endif
