#include "monty.h"

/**
 * pall - Inachapisha vipengele vyote kwenye stack
 * @stack: Pointer kwa kipengele cha juu cha stack
 * @nambari_ya_mstari: Nambari ya mstari unaotekelezwa (haitumiki)
 *
 * Inachapisha kila kipengele kwenye stack kuanzia kile cha juu
 */
void pall(orodha_t **stack, unsigned int nambari_ya_mstari)
{
orodha_t *sasa = *stack;

(void)nambari_ya_mstari;

while (sasa != NULL)
{
printf("%d\n", sasa->nambari);
sasa = sasa->inayofuata;
}
}
