#include <iostream>
#include "GameManager.h"

#define YES 1
#define NO 0

void main()
{
	int result = -1;
	do
	{
		std::cout << "Play a game of President ? (1 = yes / 0 = no)"
			<< std::endl;	
		std::cin >> result;
	} while (result != YES && result != NO);
	
	while (result == YES)
	{
		GM_InitGame();

		do
		{
			std::cout << "Want to replay a game ?  (1 = yes / 0 = no)"
				<< std::endl;
			std::cin >> result;
		} while (result != YES && result != NO);
	}
	
}