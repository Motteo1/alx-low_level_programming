#ifndef LISTS_H
#define LISTS_H

#include <stdio.h> /* printf */
#include <stdlib.h> /* malloc, free */
#include <string.h> /* size_t */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for ALX project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* function prototypes */
size_t print_listint(const listint_t *h);

#endif
