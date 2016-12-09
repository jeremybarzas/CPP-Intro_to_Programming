#include "PathfindingLecture.h"

int main()
{
	Vector2D playerPos = Vector2D(0, 0);
	Vector2D playerVelo = Vector2D(0, 1);

	Vector2D Force = Vector2D( 0, 0);

	Agent player = Agent(playerPos, playerVelo);

	bool diditMove = player.AddForce(Force);

	system("pause");
	return 0;
}