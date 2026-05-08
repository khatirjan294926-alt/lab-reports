#include <iostream>
using namespace std;

// Step 1: Function Declaration
void multiply(int num1, int num2);

int main() {

    int a, b;

    // Step 2: User se input lena
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    // Step 3: Function Call (arguments pass kiye)
    multiply(a, b);

    return 0;
}

// Step 4: Function Definition
void multiply(int num1, int num2) {

    int product;

    // multiplication calculate ki
    product = num1 * num2;

    // result display kiya
    cout << "Product = " << product << endl;
}
