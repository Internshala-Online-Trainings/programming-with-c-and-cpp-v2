#include "game.h"
using namespace std;


Game::Game() {

	playersPerTeam = 4;
	maxBalls = 6;
	totalPlayers = 11;

	players[0] = "Virat";
	players[1] = "Rohit";
	players[2] = "Dhawan";
	players[3] = "Pant";
	players[4] = "Karthik";
	players[5] = "KLRahul";
	players[6] = "Jadeja";
	players[7] = "Hardik";
	players[8] = "Bumrah";
	players[9] = "BKumar";
	players[10] = "Ishant";

	isFirstInnings = false;
	teamA.name = "Team-A";
	teamB.name = "Team-B";
}

void Game::welcome() {

	cout << "---------------------------------------" << endl;
    cout << "|============== CRIC-IN ==============|" << endl;
    cout << "|                                     |" << endl;
    cout << "|   Welcome to Virtual Cricket Game   |" << endl;
    cout << "---------------------------------------" << endl;

    cout << endl << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|================== Instructions ==================|" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "|                                                  |" << endl;
    cout << "| 1. Create 2 teams (Team-A and Team-B with 4      |" << endl;
    cout << "|    players each) from a given pool of 11 players.|" << endl;
    cout << "| 2. Lead the toss and decide the choice of play.  |" << endl;
    cout << "| 3. Each innings will be of 6 balls.              |" << endl;
    cout << "----------------------------------------------------" << endl;
}
