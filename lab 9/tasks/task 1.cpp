#include <iostream>
using namespace std;

// Step 1: Function Declaration (Prototype)
void greet();   // function ka naam greet hai, koi parameter nahi, return type void hai

int main() {

    // Step 3: Function Call
    greet();   // yahan function ko call kiya gaya

    return 0;
}

// Step 2: Function Definition
void greet() {
    // yeh function ek greeting message display karega
    cout << "Hello! Welcome to C++ Programming." << endl;
}
