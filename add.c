#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @kichwa: stack head
 * @hesabu: line_number
 * Return: no return
 */
void add(stack_t **kichwa, unsigned int hesabu)
{
stack_t *h;
int urefu = 0, msaada;
h = *kichwa;
while (h)
{
h = h->next;
urefu++;
}
if (urefu < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", hesabu);
fclose(bus.file);
free(bus.content);
free_stack(*kichwa);
exit(EXIT_FAILURE);
}
h = *kichwa;
msaada = h->n + h->next->n;
h->next->n = msaada;
*kichwa = h->next;
free(h);
}
