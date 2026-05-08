#include <iostream>
using namespace std;

// Step 1: Function Declaration (Prototype)
void sayHello();   // function ka naam sayHello hai, koi parameter nahi, return type void hai

int main() {

    // Step 3: Function Call
    sayHello();   // function ko call kiya gaya

    return 0;
}

// Step 2: Function Definition
void sayHello() {
    // yeh function ek message display karega
    cout << "Hello, World!" << endl;
}