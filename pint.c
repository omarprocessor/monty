#include "monty.h"

/**
 * pint - Prints the value at the top of the stack
 * @kichwa: Pointer to the head of the stack
 * @line_number: Line number in the bytecode file
 */
void pint(stack_t **kichwa, unsigned int line_number)
{
if (*kichwa == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*kichwa)->n);
}
