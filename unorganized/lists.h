#ifndef LISTs_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: sting - (malloc'ed string)
 * @len: length of the string
 * @next: points to hte next node
 * 
 * Description: singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
#endif
