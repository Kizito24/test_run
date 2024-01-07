#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

void reset_to_98(int *n);
int _atoi(char *s);
void _puts_recursion(char *s);
int wildcmp(char *s1, char *s2);

#endif
