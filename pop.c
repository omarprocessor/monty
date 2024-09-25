#include "monty.h"

/**
 * pop - Removes the top element of the stack
 * @kichwa: Pointer to the top of the stack
 * @line_number: The current line number in the file
 */
void pop(stack_t **kichwa, unsigned int line_number)
{
stack_t *temp;

if (*kichwa == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
exit(EXIT_FAILURE);
}

temp = *kichwa;
*kichwa = (*kichwa)->next;
if (*kichwa != NULL)
(*kichwa)->prev = NULL;
free(temp);
}
