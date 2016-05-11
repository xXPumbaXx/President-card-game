#ifndef DECK_H
#define DECK_H

#include "Card.h"

#define DECK_LENGHT 52

struct Deck
{
	Card cards[DECK_LENGHT];
};

void Deck_InitDeck(Deck& deck);
void Deck_ShuffleCards(Deck& deck);


#endif