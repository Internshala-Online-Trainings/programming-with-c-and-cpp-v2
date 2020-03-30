#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "team.h"		// "player.h", <string>, <vector>


class Game {

	public:
		Game();
		bool isFirstInnings;
		Team teamA, teamB;
		Team *battingTeam, *bowlingTeam;
		Player *batsman, *bowler;
};
