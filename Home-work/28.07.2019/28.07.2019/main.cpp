#include "Game.h"
#include <ctime>
int main(short argc=3)
{
	srand(unsigned(time(NULL)));
	argc = 3;
	Game game(argc);
	game.Start_game_();
	return 0;
}