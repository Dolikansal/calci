#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 17;
int x, y, obstacleX, obstacleY, score;
enum eDirection { STOP = 0, LEFT, RIGHT };
eDirection dir;

void Setup() {
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height - 1;
    obstacleX = rand() % width;
    obstacleY = 0;
    score = 0;
}

void Draw() {
    system("cls"); // Clear the console
    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) cout << "#";
            if (i == y && j == x) cout << "B"; // Bike
            else if (i == obstacleY && j == obstacleX) cout << "O"; // Obstacle
            else cout << " ";
            if (j == width - 1) cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'x':
            gameOver = true;
            break;
        }
    }
}

void Logic() {
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    default:
        break;
    }

    if (x >= width) x = width - 1;
    else if (x < 0) x = 0;

    obstacleY++;
    if (obstacleY >= height) {
        obstacleY = 0;
        obstacleX = rand() % width;
        score++;
    }

    if (obstacleY == y && obstacleX == x) {
        gameOver = true;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }
    return 0;
}