#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS

#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
