#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& board, int row, int col, int N) {
    // Check this row on left side
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on left side
    for (int i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

bool solveNQUtil(vector<vector<int>>& board, int col, int N) {
    // Base case: If all queens are placed
    if (col >= N)
        return true;

    // Try placing queen in all rows of this column
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col, N)) {
            board[i][col] = 1; // Place the queen

            // Recur to place rest of the queens
            if (solveNQUtil(board, col + 1, N))
                return true;

            // If placing doesn't lead to solution, backtrack
            board[i][col] = 0;
        }
    }

    // If queen can't be placed in any row of this column
    return false;
}

void printSolution(vector<vector<int>>& board, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << (board[i][j] ? "Q " : ". ");
        cout << endl;
    }
}

bool solveNQ(int N) {
    vector<vector<int>> board(N, vector<int>(N, 0));

    if (!solveNQUtil(board, 0, N)) {
        cout << "Solution does not exist for " << N << " queens." << endl;
        return false;
    }

    printSolution(board, N);
    return true;
}

int main() {
    int N;
    cout << "Enter the number of queens: ";
    cin >> N;

    solveNQ(N);
    return 0;
}