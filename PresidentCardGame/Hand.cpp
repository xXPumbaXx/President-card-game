#include "Hand.h"

bool Hand_IsEmpty(Hand& hand)
{
	if (hand.nbCards == 0)
	{
		return true;
	}
	return false;
}