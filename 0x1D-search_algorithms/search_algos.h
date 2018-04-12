#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int size_t2int(size_t val);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H */
