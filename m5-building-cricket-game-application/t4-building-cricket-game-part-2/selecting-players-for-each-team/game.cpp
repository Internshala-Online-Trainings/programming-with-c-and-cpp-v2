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

void Game::showAllPlayers() {

	cout << endl;
	cout << "---------------------------------------" << endl;
	cout << "|========== Pool of Players ==========|" << endl;
	cout << "---------------------------------------" << endl;
	cout << endl;

	for (int i = 0; i < totalPlayers; i++) {
        cout << "\t\t[" << i << "] " << players[i] << endl;
    }
}

int Game::takeIntegerInput() {

	int n;

	while (!(cin >> n)) {

		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input! Please try again with valid input: ";
	}

	return n;
}

void Game::selectPlayers() {

	cout << endl;
	cout << "------------------------------------------------" << endl;
	cout << "|========== Create Team-A and Team-B ==========|" << endl;
	cout << "------------------------------------------------" << endl;

	for (int i = 0; i < playersPerTeam; i++) {

		// Add player to team A
		cout << endl << "Select player " << i + 1 << " of Team A - ";
		int playerIndexTeamA = takeIntegerInput();

		cout << endl << "Please select from the given players" << endl;
		Player teamAPlayer;
		teamAPlayer.id = playerIndexTeamA;
		teamAPlayer.name = players[playerIndexTeamA];
		teamA.players.push_back(teamAPlayer);

		// Add player to team B
		cout << endl << "Select player " << i + 1 << " of Team B - ";
		int playerIndexTeamB = takeIntegerInput();

		cout << endl << "Please select from the given players" << endl;
		Player teamBPlayer;
		teamBPlayer.name = players[playerIndexTeamB];
		teamB.players.push_back(teamBPlayer);
	}
}









