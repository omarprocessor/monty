#include "monty.h"

/**
 * addnode - adds a new node at the beginning of the stack
 * @kichwa: pointer to the head of the stack
 * @n: integer value to be added to the new node
 *
 * Return: no return (void)
 */
void addnode(stack_t **kichwa, int n)
{
stack_t *new_node = malloc(sizeof(stack_t));
if (!new_node)
exit(EXIT_FAILURE); /* Handle memory allocation failure */

new_node->n = n;
new_node->next = *kichwa;
new_node->prev = NULL;
if (*kichwa)
(*kichwa)->prev = new_node;
*kichwa = new_node;
}

/**
 * addqueue - adds a new node at the end of the stack
 * @kichwa: pointer to the head of the stack
 * @n: integer value to be added to the new node
 *
 * Return: no return (void)
 */
void addqueue(stack_t **kichwa, int n)
{
stack_t *new_node = malloc(sizeof(stack_t));
stack_t *temp = *kichwa;

if (!new_node)
exit(EXIT_FAILURE); /* Handle memory allocation failure */

new_node->n = n;
new_node->next = NULL;

if (!temp) /* If the stack is empty */
{
new_node->prev = NULL;
*kichwa = new_node;
return;
}

while (temp->next) /* Find the last node */
temp = temp->next;

temp->next = new_node;
new_node->prev = temp;
}
