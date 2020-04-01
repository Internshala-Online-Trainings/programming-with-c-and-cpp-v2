#include <vector>
#include "player.h"		// <string>


class Team {

	public:
		Team();
		std::string name;
		int totalRunsScored;
		int wicketsLost;
		int totalBallsBowled;
		std::vector<Player> players;
};
