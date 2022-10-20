#ifndef _LISTS
#define _LISTS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed sstring)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure for ALX project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

void liebre_tortuga(void) __attribute__ ((constructor));

list_t *add_node(list_t **head, const char *str);

void free_list(list_t *head);

list_t *add_node_end(list_t **head, const char *str);

int _strlen(const char *s);

size_t list_len(const list_t *h);

size_t print_list(const list_t *h);


#endif
