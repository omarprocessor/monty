#include "monty.h"

/**
 * push - add node to the stack
 * @kichwa: stack head
 * @hesabu: line_number
 * Return: no return
*/
void push(stack_t **kichwa, unsigned int hesabu)
{
int n, j = 0, bendera = 0;

if (bus.arg)
{
if (bus.arg[0] == '-')
j++;
for (; bus.arg[j] != '\0'; j++)
{
if (bus.arg[j] > 57 || bus.arg[j] < 48)
bendera = 1;
}
if (bendera == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", hesabu);
fclose(bus.file);
free(bus.content);
free_stack(*kichwa);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", hesabu);
fclose(bus.file);
free(bus.content);
free_stack(*kichwa);
exit(EXIT_FAILURE);
}
n = atoi(bus.arg);
if (bus.lifi == 0)
addnode(kichwa, n);
else
addqueue(kichwa, n);
}
