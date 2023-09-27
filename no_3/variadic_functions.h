#ifndef VARIADIC
#define VARIADIC

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);

#endif
