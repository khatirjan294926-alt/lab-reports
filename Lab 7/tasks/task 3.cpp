#include <iostream>
using namespace std;

int main() {
    int source[5] = {1, 2, 3, 4, 5};
    int destination[5];

    for(int i = 0; i < 5; i++) {
        destination[i] = source[i];
    }

    cout << "Source Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << source[i] << " ";
    }

    cout << endl;

    cout << "Destination Array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << destination[i] << " ";
    }

    return 0;
}