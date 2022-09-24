#include <stdio.h>
#include <stdlib.h>

int main() {

	// Coin flip to decide who goes first

	int coin;
	int heads;
	int tails;
	int tossCount;

	heads = 0;
	tails = 0;

	// This is the coin toss;
	// This while statement makes sure there's only one coin toss:
	while(tossCount != 1) {

		coin = rand();

		if (coin%2 == 0 ) {
			heads++;
			printf("Heads goes first.\n");
		} else {
			tails++;
			printf("Tails goes first.\n");
		}

		// The following variable makes sure the coin toss happened:
		tossCount = 1;
	}

	// The game begins here
	// If Tails starts, it has 5 spots to pick, Heads has 4
	// If Heads starts, it has 5 spots to pick, Tails has 4

	char tictac[3][3] = { {'N', 'N', 'N'}, {'N', 'N', 'N'}, {'N', 'N', 'N'} };

	// Variable to decided whose turn it is
	char turn = 'N';

	// How many times a player has played
	int xCount = 0;
	int oCount = 0;

	// Variables to navigate the matrix
	int i = 0;
	int j = 0;

	// Variables used by the player to pick a spot
	int row = 0;
	int col = 0;

	// First player
	if(heads == 1 && tossCount == 1) {
		printf("Heads, you are X, pick your spot:\n");
		printf("Row: ");
		scanf("%d", &row);
		printf("Column: ");
		scanf("%d", &col);

		// Picking a spot:
		tictac[row][col] = 'X';

		// Reset the toss count to 0:
		tossCount = 0;

		// Change the turn:
		turn = 'T';

		// Increase the number of plays by Heads:
		xCount++;

		// Reset the selector variables:
		row = 0;
		col = 0;

		// Continue the game

		while(xCount <= 5 && oCount <= 4) {
			if(turn == 'T') {
				printf("Tails, you are O, pick your spot:\n");

				printf("Row: ");
				scanf("%d", &row);
				printf("Column: ");
				scanf("%d", &col);

				// Picking a spot:
				tictac[row][col] = 'O';

				// Change the turn:
				turn = 'H';

				// Increase the number of plays by Tails:
				oCount++;

				// Reset the selector variables:
				row = 0;
				col = 0;
			} else {
				printf("Heads, you are X, pick your spot:\n");

				printf("Row: ");
				scanf("%d", &row);
				printf("Column: ");
				scanf("%d", &col);

				// Picking a spot:
				tictac[row][col] = 'X';

				// Change the turn:
				turn = 'T';

				// Increase the number of plays by Heads:
				xCount++;

				// Reset the selector variables:
				row = 0;
				col = 0;
			}
		}

		// Game should end here with Heads as first;
	} else if(tails == 1 && tossCount == 1) {
		printf("Tails, you are O, pick your spot:\n");
		printf("Row: ");
		scanf("%d", &row);
		printf("Column: ");
		scanf("%d", &col);

		// Reset the toss count to 0;
		tossCount = 0;

		turn = 'H';
		oCount++;

		// Reset the selector variables:
		row = 0;
		col = 0;

		// Continue the game:

		while(oCount <= 5 && xCount <= 4) {
			if(turn == 'T') {
				printf("Tails, you are O, pick your spot:\n");

				printf("Row: ");
				scanf("%d", &row);
				printf("Column: ");
				scanf("%d", &col);

				// Picking a spot:
				tictac[row][col] = 'O';

				// Change the turn:
				turn = 'H';

				// Increase the number of plays by Tails:
				oCount++;

				// Reset the selector variables:
				row = 0;
				col = 0;
			} else {
				printf("Heads, you are X, pick your spot:\n");

				printf("Row: ");
				scanf("%d", &row);
				printf("Column: ");
				scanf("%d", &col);

				// Picking a spot:
				tictac[row][col] = 'X';

				// Change the turn:
				turn = 'T';

				// Increase the number of plays by Heads:
				xCount++;

				// Reset the selector variables:
				row = 0;
				col = 0;
			}
		}

		// Game should end here with Tails as first;

	}

	// Print the Tic Tac Toe matrix to the screen:

	return 0;
}
