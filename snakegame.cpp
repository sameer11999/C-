#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
	ifstream a;		// Not Used in this program

	int score [4][5];

	int key;	// This will be used to store key (an integer) from player and used as seed for srand ();

	string player1;
	string player2;

	// Initialize scores
	int player1_score = 0;
	int player2_score = 0;

	cout << "Enter the name of player 1: " << endl;
	cin >> player1;

	cout << "Enter the name of player 2: " << endl;
	cin >> player2;

	while ( player1_score < 20 && player2_score < 20 )
	{
		cout << player1 << " Please enter a key to generate a random number: " << endl;
		cin >> key;

		srand ( key );
		int random = rand ( ) % 6;

		player1_score += random;

		cout << "Your random number is: " << random << endl;
		cout << "Your score is: " << player1_score << endl;


		cout << player2 << " Please enter a key to generate a random number: " << endl;
		cin >>  key;

		srand ( key );
		random = rand () % 6;

		player2_score += random;

		cout << "Your random number is: " << random << endl;
		cout << "Your score is: " << player2_score << endl;
	}

	if ( player1_score > player2_score )
		cout << player1 << " is the winner." << endl;
	else if ( player2_score > player1_score )
		cout << player2 << " is the winner." << endl;
	else
		cout << "The match is a draw." << endl;

	return 0;
}