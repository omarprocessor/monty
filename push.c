#include "monty.h"

/**
 * sukuma - Inaongeza kipengele kipya juu ya stack
 * @stack: Pointer kwa kipengele cha juu cha stack
 * @nambari_ya_mstari: Nambari ya mstari unaotekelezwa
 * @thamani: Thamani ya kipengele kipya
 *
 * Inasukuma kipengele kipya na kulipa thamani
 */
void push(orodha_t **stack, unsigned int nambari_ya_mstari, char *thamani)
{
orodha_t *kipya;
int nambari;

if (thamani == NULL || isdigit(thamani[0]) == 0)
{
fprintf(stderr, "L%u: usage: push integer\n", nambari_ya_mstari);
exit(EXIT_FAILURE);
}

nambari = atoi(thamani);
kipya = malloc(sizeof(orodha_t));

if (kipya == NULL)
{
fprintf(stderr, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}

kipya->nambari = nambari;
kipya->iliopita = NULL;
kipya->inayofuata = *stack;

if (*stack != NULL)
{
(*stack)->iliopita = kipya;
}

*stack = kipya;
}
