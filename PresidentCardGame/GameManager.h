#ifndef GAME_MANAGER_H
#define GAME_MANAGER_H

#include "Deck.h"
#include "Player.h"
#include <iostream>

#define MAX_PLAYERS 6

struct GameManager
{
	Player players[MAX_PLAYERS];
	Deck deck;
	int nbHands;
	int nbPlayers;
};

void GM_InitGame();
void GM_StartGame(int nbHands, GameManager& manager);
void GM_DealCards(GameManager& manager);
void GM_PlayTurn(int player, GameManager& manager);


#endif