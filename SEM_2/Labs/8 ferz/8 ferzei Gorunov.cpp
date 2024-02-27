#include <iostream>
#include <vector>
using namespace std;
const int N = 8;
vector<int> board(N, -1);
int solutions = 0;
bool isSafe(int row, int col) {
    for (int i = 0; i < N; ++i) {
        if (board[i] != -1 && (col == board[i] || abs(row - i) == abs(col - board[i]))) {
            return false;
        }
    }
    return true;
}

void printBoard() {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (j == board[i]) {
                cout << "Q ";
            }
            else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void solve(int row) {
    if (row == N) {
        cout << "Решение " << ++solutions << ":" << endl;
        printBoard();
        return;
    }
    for (int col = 0; col < N; ++col) {
        if (isSafe(row, col)) {
            board[row] = col;
            solve(row + 1);
            board[row] = -1;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    solve(0);
    cout << "Всего решений: " << solutions << endl;
    return 0;
}