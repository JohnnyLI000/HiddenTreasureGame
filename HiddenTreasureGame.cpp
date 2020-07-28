// HiddenTreasureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void playerMove(char move, int playerLocation[]);
void foundTreasure(int x, int y);

int main()
{
	int playerLocation[2] = { 0,0 };
	char move;
	std::cout << "You are at ( " << playerLocation[0] << " , " << playerLocation[1] << " ). Move(W/A/S/D)" << std::endl;

	do {
		std::cin >> move;
		if (playerLocation[0] == 10 || playerLocation[1] == 10)
		{
			std::cout << "You are at edge , cannot move anymore further" << std::endl;
		}
		if (playerLocation[0] >= 10 && tolower(move) == 'd') {
			std::cout << "You are at （ " << playerLocation[0] << " , " << playerLocation[1] << "). Move(W/A/S/D)" << std::endl;
			continue;

		}
		else if (playerLocation[1] >= 10 && tolower(move) == 'w') {
			std::cout << "You are at （ " << playerLocation[0] << " , " << playerLocation[1] << "). Move(W/A/S/D)" << std::endl;
			continue;
		}

		playerMove(move, playerLocation);
		std::cout << "You are at （ " << playerLocation[0] << " , " << playerLocation[1] << "). Move(W/A/S/D)" << std::endl;


	} while (move != 'q');

}

void playerMove(char move, int playerLocation[])
{
	if (move == 'w' || move == 'W')
	{
		playerLocation[1]++;
		foundTreasure(playerLocation[0], playerLocation[1]);
	}
	else if (move == 's' || move == 'S')
	{
		playerLocation[1]--;
		foundTreasure(playerLocation[0], playerLocation[1]);
	}
	else if (move == 'A' || move == 'a')
	{
		playerLocation[0]--;
		foundTreasure(playerLocation[0], playerLocation[1]);

	}
	else if (move == 'd' || move == 'D')
	{
		playerLocation[0]++;
		foundTreasure(playerLocation[0], playerLocation[1]);
	}
	else if (move == 'q')
	{

	}
	else {
		std::cout << "\ninvalid input\n";
	}
}

void foundTreasure(int x, int y) {
	if (x == 2 && y == 3)
	{
		std::cout << "You found pirates' Chest" << std::endl;
	}
	if (x == -5 && y == -3)
	{
		std::cout << "You found golden idol" << std::endl;
	}
	if (x == 1 && y == -2)
	{
		std::cout << "You found precious gemstones" << std::endl;
	}
	if (x == 5 && y == 2)
	{
		std::cout << "You found lost artwork" << std::endl;
	}
	if (x == 8 && y == 3)
	{
		std::cout << "You found crystals" << std::endl;
	}
}






