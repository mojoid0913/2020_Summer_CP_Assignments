#include <stdio.h>
#include <stdlib.h>
#define ERROR "Something is wrong :("

void traverseMaze(char maze[12][12], const int xCoord, const int yCoord, int x, int y, int direction);
//starting point [xCoord][ yCoord], current position [x][y], current direction of right wall: direction

int main(void) {
	char maze[12][12] = { '0', };
	int xStart, yStart, x, y;
	srand(3);

	//initialize maze grid to ‘1’s
	for (int i = 0; i < 12; i++) {
		if (i == 0 || i == 11) {
			for (int j = 0; j < 12; j++) {
				maze[i][j] = '1';
			}
		}
		else {
			for (int j = 0; j < 12; j++) {
				if(j==0 || j==11)
					maze[i][j] = '1';
			}
		}
	}

	//randomly set entry point of maze and set those coordinates to '0'
	
	switch (rand() % 3) {
		case 0:	//[n][0]
			maze[rand() % 11][0] = '0';
			break;
		case 1:	//[0][n]
			maze[0][rand() % 11] = '0';
			break;
		case 2: //[11][n]
			maze[11][rand() % 11] = '0';
			break;
		case 3: //[n][11]
			maze[rand() % 11][11] = '0';
			break;
		default: printf(ERROR);
			break;
	}
	
	//randomly set exit point of maze and set those coordinates to '0'
	switch (rand() % 3) {
	case 0:	//[n][0]
		maze[rand() % 11][0] = '0';
		break;
	case 1:	//[0][n]
		maze[0][rand() % 11] = '0';
		break;
	case 2: //[11][n]
		maze[11][rand() % 11] = '0';
		break;
	case 3: //[n][11]
		maze[rand() % 11][11] = '0';
		break;
	default: printf(ERROR);
		break;
	}

	//randomly insert ‘0’ to the maze to create the path – maximum possible zeros is 99

	for (int k = 0; k < 12; k++) {
		for (int l = 0; l < 12; l++) {
			printf("%2c", maze[k][l]);
		}
		printf("\n");
	}
		//traverseMaze(maze, xStart, yStart, x, y, direction);
	return 0;
}

void traverseMaze(char maze[12][12], const int xCoord, const int yCoord, int x, int y, int direction) {
	
	maze[x][y] = 'X';	//Set the current position[x][y] = ‘X’
		//print the maze
		//Handle if maze is completed
		//If not completed, make the next move
		//choose a valid move from the current positon, and call traverseMaze( ) with the valid cooridinate

	return ;
}
