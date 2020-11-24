#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
char mark;
int player = 1;
int choice = 0;
int i = -1;
int game = 0;
int cpu = 0;

void board() {
    system("clear");

    cout << "Tic Tac Toe\n";
	
	if (game == 1) cout << "Player: X\tCPU: O\n\n";
    if (game == 2) cout << "Player 1: X\tPlayer 2: O\n\n";

    cout << "     |     |     \n";
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     \n\n";
}

int win() {
    if (square[1] == square[2] && square[2] == square[3]) return 1;
	if (square[1] == square[4] && square[4] == square[7]) return 1;
    if (square[1] == square[5] && square[5] == square[9]) return 1;
    if (square[3] == square[5] && square[5] == square[7]) return 1;
    if (square[4] == square[5] && square[5] == square[6]) return 1;
    if (square[7] == square[8] && square[8] == square[9]) return 1;
    if (square[2] == square[5] && square[5] == square[8]) return 1;
    if (square[3] == square[6] && square[6] == square[9]) return 1;
    if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
        && square[4] != '4' && square[5] != '5' && square[6] != '6' 
        && square[7] != '7' && square[8] != '8' && square[9] != '9') {
        return 0;
    }
    
    return -1;
}

void single() {
	cpu = 1;
	
	while (i == -1) {
        board();
        player = (player % 2) ? 1 : 2;

        while (player == 1) {
			cout << "Player, enter a number: ";
			cin >> choice;
			if (choice < 1 || choice > 9) {
				cout << "Please enter a number between 1 - 9\n";
				continue;
			}
			
			if (square[choice] != 'X' && square[choice] != 'O') break;
			
			cout << "Please enter free space\n";
		}
		
		while (player == 2) {
			srand((unsigned) time(0));
			choice = 1 + (rand() % 9);
				
			if (square[choice] != 'X' && square[choice] != 'O') break;
		}

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1') square[1] = mark;
        else if (choice == 2 && square[2] == '2') square[2] = mark;
        else if (choice == 3 && square[3] == '3') square[3] = mark;
        else if (choice == 4 && square[4] == '4') square[4] = mark;
        else if (choice == 5 && square[5] == '5') square[5] = mark;
        else if (choice == 6 && square[6] == '6') square[6] = mark;
        else if (choice == 7 && square[7] == '7') square[7] = mark;
        else if (choice == 8 && square[8] == '8') square[8] = mark;
        else if (choice == 9 && square[9] == '9') square[9] = mark;
        else {
            cout << "Invalid Move!\n";
            continue;
        }

        i = win();
        board();
		
		if (i == 1 && player == 2) cpu = 2;
		if (i == 1) return;
		
		player++;
    }
}

void mult() {
	while (i == -1) {
        board();
        player = (player % 2) ? 1 : 2;

		for (;;) {
			cout << "Player " << player << ", enter a number: ";
			cin >> choice;
			if (choice < 1 || choice > 9) {
				cout << "Please enter a number between 1 - 9\n";
				continue;
			}
			
			if (square[choice] != 'X' && square[choice] != 'O') break;
			
			cout << "Please enter free space\n";
		}

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1') square[1] = mark;
        else if (choice == 2 && square[2] == '2') square[2] = mark;
        else if (choice == 3 && square[3] == '3') square[3] = mark;
        else if (choice == 4 && square[4] == '4') square[4] = mark;
        else if (choice == 5 && square[5] == '5') square[5] = mark;
        else if (choice == 6 && square[6] == '6') square[6] = mark;
        else if (choice == 7 && square[7] == '7') square[7] = mark;
        else if (choice == 8 && square[8] == '8') square[8] = mark;
        else if (choice == 9 && square[9] == '9') square[9] = mark;
        else {
            cout << "Invalid Move!\n";
            continue;
        }

        i = win();
        board();
		
		if (i == 1) return;
		player++;
    }
	
	return;
}

int main() {
    system("clear");
	cout << "Tic Tac Toe\n";
	cout << "Press 1 for single player, 2 for multplayer: ";
	cin >> game;
	
	if (game == 1) single();
	if (game == 2) mult();
	
	if (i == 1 && cpu == 1) cout << "Player Wins!\n";
	else if (i == 1 && cpu == 2) cout << "CPU Wins!\n";
	else if (i == 1 && cpu == 0) cout << "Player " << player << " Wins!\n";
    else cout << "Tie Game!\n";
}
