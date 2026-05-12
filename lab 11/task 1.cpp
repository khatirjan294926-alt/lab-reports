#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // 1. String variable declare aur initialize
    string message = "Hello, I am learning C++ programming";

    // 2. Built-in function se length calculate karna
    int length = message.length();

    // 3. Result display karna
    cout << "Message: " << message << endl;
    cout << "Length of string is: " << length << endl;

    return 0;
}