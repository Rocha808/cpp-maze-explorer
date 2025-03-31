#include <iostream>
using namespace std;

int main() {
    int playerX = 1, playerY = 1;
    char move;
    bool gameRunning = true;

    while (gameRunning) {
        // Print the Maze
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                if (i == 0 || i == 4 || j == 0 || j == 4) {
                    cout << "#";
                } else if (i == playerX && j == playerY) {
                    cout << ".";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        // Get player input
        cout << "Move (WASD): ";
        cin >> move;

        // Update player position based on input
        switch (move) {
            case 'W':
            case 'w':
                if (playerX > 1) playerX--;
                break;
            case 'S':
            case 's':
                if (playerX < 3) playerX++;
                break;
            case 'A':
            case 'a':
                if (playerY > 1) playerY--;
                break;
            case 'D':
            case 'd':
                if (playerY < 3) playerY++;
                break;
            default:
                cout << "Invalid move!" << endl;
        }

        // Check if player reached the exit
        if (playerX == 3 && playerY == 3) {
            cout << "You reached the exit!" << endl;
            gameRunning = false;
        }
         
    }

    return 0;
}