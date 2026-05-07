#include <iostream>
using namespace std;

int main() {
    char message[] = "HELLO";

    for(int i = 0; message[i]; i++) {
        cout << message[i] << endl;
    }

    return 0;
}