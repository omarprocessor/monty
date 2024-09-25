#include "monty.h"

/**
 * pall - prints the stack
 * @kichwa: stack head
 * @hesabu: no used
 * Return: no return
*/
void pall(stack_t **kichwa, unsigned int hesabu)
{
stack_t *h;
(void)hesabu;

h = *kichwa;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
