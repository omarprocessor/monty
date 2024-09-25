#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct orodha_s - Muundo wa orodha ya stack
 * @nambari: Nambari ya kipengele
 * @iliopita: Pointer kwa kipengele cha awali
 * @inayofuata: Pointer kwa kipengele kinachofuata
 *
 * Muundo wa nodelist kwa ajili ya stack
 */
typedef struct orodha_s
{
    int nambari;
    struct orodha_s *iliopita;
    struct orodha_s *inayofuata;
} orodha_t;

/* Kazi za mfano */
void push(orodha_t **stack, unsigned int nambari_ya_mstari, char *thamani);
void pall(orodha_t **stack, unsigned int nambari_ya_mstari);

#endif /* MONTY_H */
