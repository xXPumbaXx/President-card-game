#ifndef HAND_H
#define HAND_H

#include "Card.h"

struct Hand
{
	Card cards[20];
	int nbCards;
};

bool Hand_IsEmpty(Hand& hand);

#endif