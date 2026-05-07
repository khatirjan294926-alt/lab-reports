#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int matrix[4][4];

    srand(time(0));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = rand() % 100;
        }
    }

    cout << "Matrix:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int maxValue = matrix[0][0];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
            }
        }
    }

    cout << "\nMaximum value: " << maxValue << endl;

    return 0;
}