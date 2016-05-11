#include "GameManager.h"

void GM_InitGame()
{ 
	GameManager manager;
	int nbPlayers = 0;
	int nbHands = 0;
	do
	{
		std::cout << "How many players ?" << std::endl;
		std::cin >> nbPlayers;
	} while (nbPlayers < 0 && nbPlayers > MAX_PLAYERS);

	do
	{
		std::cout << "How many hands ?" << std::endl;
		std::cin >> nbHands;
	} while (nbHands < 0);

	manager.nbPlayers = nbPlayers;
	manager.nbHands = nbHands;
	
	GM_StartGame(nbHands, manager);
}

void GM_StartGame(int nbHands, GameManager& manager)
{
	Deck_InitDeck(manager.deck);
	GM_DealCards(manager);
	int nbPlayerFinished = 0;
	int nbTurns = 0;
	int turnPlayer = 0;

	//Game Loop
	while (nbPlayerFinished != manager.nbPlayers - 1)
	{
		
	}
}

void GM_DealCards(GameManager& manager)
{

}

void GM_PlayTurn(int player, GameManager& manager)
{
	//manager.players[0].hand
}