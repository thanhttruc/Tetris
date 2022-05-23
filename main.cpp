#include <iostream>
#include "bits-stdc++.h"

#include "Tetris.h"


using namespace std;

int main(int argc, char* argv[])
{
	srand(time(NULL));
	Tetris* tetris = new Tetris();
	const char* title = "Tetris";
	if (tetris->init(title))
	{
		while (tetris->isrunning())
		{
			tetris->setCurrentTime(SDL_GetTicks());
			tetris->handleEvents();
			tetris->gameplay();
			tetris->updateRender();

		}
	}
	else
	{
		cout << "Failed to initialize";
	}
	SDL_QUIT;
	tetris->clean();

	return 0;
}