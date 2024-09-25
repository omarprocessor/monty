#include "monty.h"

/**
 * free_stack - Frees the stack
 * @kichwa: Pointer to the head of the stack
 */
void free_stack(stack_t *kichwa)
{
stack_t *temp;

while (kichwa)
{
temp = kichwa->next;
free(kichwa);
kichwa = temp;
}
}
