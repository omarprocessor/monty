#include "monty.h"

/**
 * main - Kazi kuu ya kuendesha stack
 * @argc: Idadi ya vigezo vya mstari wa amri
 * @argv: Orodha ya vigezo vya mstari wa amri
 *
 * Inasukuma kipengele na kuonyesha stack yote
 * Return: 0 kwa mafanikio
 */
int main(int argc, char *argv[])
{
orodha_t *stack = NULL;

if (argc != 2)
{
fprintf(stderr, "Usage: %s <integer>\n", argv[0]);
return (EXIT_FAILURE);
}

push(&stack, 1, argv[1]);
pall(&stack, 1);

return (0);
}
