#include <iostream>
using namespace std;

// Step 1: Function Declaration
int getSquare(int number);

int main() {

    int num, result;

    // Step 2: User se input lena
    cout << "Enter a number: ";
    cin >> num;

    // Step 3: Function Call
    result = getSquare(num);

    // Step 4: Result display
    cout << "Square = " << result << endl;

    return 0;
}

// Step 5: Function Definition
int getSquare(int number) {

    int square;

    // square calculate kiya
    square = number * number;

    // result return kiya
    return square;
}