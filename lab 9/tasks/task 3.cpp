#include <iostream>
using namespace std;

// Step 1: Function Declaration
int calculateSum(int arr[], int size);

int main() {

    // Step 2: Array Declaration
    int numbers[10];   // 1D array of size 10
    int sum;
    double average;

    // Step 3: Input from user
    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Step 4: Function Call
    sum = calculateSum(numbers, 10);

    // Step 5: Average Calculation
    average = (double)sum / 10;

    // Step 6: Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

// Step 7: Function Definition
int calculateSum(int arr[], int size) {
    int sum = 0;

    // loop for summing all elements
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

    return sum;   // sum return kar diya
}