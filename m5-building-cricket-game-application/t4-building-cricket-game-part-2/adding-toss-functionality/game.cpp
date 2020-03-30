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

bool Game::validateSelectedPlayer(int index) {

	int n;
	vector<Player> players;

	players = teamA.players;
	n = players.size();
	for (int i = 0; i < n; i++) {
        if (players[i].id == index) {
        	return false;
        }
    }

    players = teamB.players;
    n = players.size();
    for (int i = 0; i < n; i++) {
        if (players[i].id == index) {
            return false;
        }
    }

    return true;
}

void Game::selectPlayers() {

	cout << endl;
	cout << "------------------------------------------------" << endl;
	cout << "|========== Create Team-A and Team-B ==========|" << endl;
	cout << "------------------------------------------------" << endl;

	for (int i = 0; i < playersPerTeam; i++) {

		// Add player to team A
		teamASelection:
			cout << endl << "Select player " << i + 1 << " of Team A - ";
			int playerIndexTeamA = takeIntegerInput();

			if (playerIndexTeamA < 0 || playerIndexTeamA > 10) {
				cout << endl << "Please select from the given players" << endl;
				goto teamASelection;
			} else if (!validateSelectedPlayer(playerIndexTeamA)) {
				cout << endl << "Player has been already selected. Please select other player" << endl;
				goto teamASelection;
			} else {
				Player teamAPlayer;
				teamAPlayer.id = playerIndexTeamA;
				teamAPlayer.name = players[playerIndexTeamA];
				teamA.players.push_back(teamAPlayer);
			}

		// Add player to team B
		teamBSelection:
			cout << endl << "Select player " << i + 1 << " of Team B - ";
			int playerIndexTeamB = takeIntegerInput();

			if (playerIndexTeamB < 0 || playerIndexTeamB > 10) {
				cout << endl << "Please select from the given players" << endl;
				goto teamBSelection;
			} else if (!validateSelectedPlayer(playerIndexTeamB)) {
				cout << endl << "Player has been already selected. Please select other player" << endl;
				goto teamBSelection;
			} else {
				Player teamBPlayer;
				teamBPlayer.name = players[playerIndexTeamB];
				teamB.players.push_back(teamBPlayer);
			}
	}
}

void Game::showTeamPlayers() {

    vector<Player> teamAPlayers = teamA.players;
    vector<Player> teamBPlayers = teamB.players;

    cout << endl << endl;
    cout << "--------------------------\t\t--------------------------" << endl;
    cout << "|=======  Team-A  =======|\t\t|=======  Team-B  =======|" << endl;
    cout << "--------------------------\t\t--------------------------" << endl;

    for (int i = 0; i < playersPerTeam; i++) {
        cout << "|\t" << "[" << i << "] " << teamAPlayers[i].name << "\t |"
        	<< "\t\t"
			<< "|\t" << "[" << i << "] " << teamBPlayers[i].name << "\t |" << endl;
    }
    cout << "--------------------------\t\t--------------------------" << endl << endl;
}








