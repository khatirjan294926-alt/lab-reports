#include <iostream>
using namespace std;

int main() {

    // Step 1: Declare and initialize array
    int numbers[] = {10, 20, 30, 40, 50};

    // Step 2: Pointer to first element of array
    int *ptr = numbers;

    // Step 3: Access elements using pointer arithmetic
    cout << "Array elements using pointer arithmetic:" << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Element " << i << " = " << *(ptr + i) << endl;
    }

    return 0;
}