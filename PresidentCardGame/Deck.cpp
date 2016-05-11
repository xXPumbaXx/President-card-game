#include "Deck.h"

void Deck_InitDeck(Deck& deck)
{
	int cardValue = 0;
	for (int i = 0; i < DECK_LENGHT; i++)
	{
		Card card;
		

		deck.cards[i] = card;
	}
}

void Deck_ShuffleCards(Deck& deck)
{
	
} 