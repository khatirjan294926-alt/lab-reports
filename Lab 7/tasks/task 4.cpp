#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    cout << "Sum = " << sum;

    return 0;
}