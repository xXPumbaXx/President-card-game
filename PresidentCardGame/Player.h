#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <string.h>
#include "Hand.h" 

enum PlayerTitle {PRESIDENT, VICE_PRESIDENT, SECRETARY, JANITOR, SCUM, NONE};

struct Player
{
	PlayerTitle playerTitle;
	Hand hand;
};



#endif