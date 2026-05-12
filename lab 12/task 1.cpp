#include <iostream>
using namespace std;

int main() {

    // Step 1: Declare and initialize integer variable
    int num = 50;

    // Step 2: Declare pointer variable
    int *ptr;

    // Step 3: Store address of num in pointer
    ptr = &num;

    // Step 4: Display values
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value using pointer (*ptr): " << *ptr << endl;

    return 0;
}