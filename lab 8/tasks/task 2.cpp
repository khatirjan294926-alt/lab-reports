#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int matrix[3][3];

    srand(time(0));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = rand() % 10;
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nRow sums:" << endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    cout << "\nColumn sums:" << endl;
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }

    int totalSum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            totalSum += matrix[i][j];
        }
    }

    cout << "\nTotal sum: " << totalSum << endl;

    return 0;
}