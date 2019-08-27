#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binary_recursion(int *array, size_t lo, size_t hi, int value);
void print_array(int *array, size_t lo, size_t hi);

#endif /* SEARCH_ALGOS_H */
