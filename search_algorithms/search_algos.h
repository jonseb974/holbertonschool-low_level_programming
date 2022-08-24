#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*prototypes*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int help_search(int *array, int value, size_t min, size_t max);
void array_print(int *array, size_t min, size_t max);

#endif
