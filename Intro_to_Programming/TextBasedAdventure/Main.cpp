#include "TextBasedAdventure.h"

int main()
{
	TextBaseAdventure * app = new TextBaseAdventure();
	
	app->Start();
	
	app->Run();

	system("pause");

	return 0;
}