#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "team.h"		// "player.h", <string>, <vector>


class Game {

	public:
		Game();
		int playersPerTeam;
		int maxBalls;
		int totalPlayers;
		std::string players[11];

		bool isFirstInnings;
		Team teamA, teamB;
		Team *battingTeam, *bowlingTeam;
		Player *batsman, *bowler;
};
