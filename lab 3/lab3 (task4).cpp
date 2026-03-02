#include <iostream>     // Input aur output ke liye library
using namespace std;    // Standard namespace use karne ke liye

int main()
{
    // Variables declare aur initialize kar rahe hain
    float subject1 = 0, subject2 = 0, subject3 = 0, subject4 = 0, subject5 = 0;
    float sum = 0;        // Total marks store karne ke liye
    float average = 0;    // Average store karne ke liye

    // User se 5 subjects ke marks input lena
    cout << "Enter marks for Subject 1: ";
    cin >> subject1;

    cout << "Enter marks for Subject 2: ";
    cin >> subject2;

    cout << "Enter marks for Subject 3: ";
    cin >> subject3;

    cout << "Enter marks for Subject 4: ";
    cin >> subject4;

    cout << "Enter marks for Subject 5: ";
    cin >> subject5;

    // Total marks calculate karna
    sum = subject1 + subject2 + subject3 + subject4 + subject5;

    // Average calculate karna
    average = sum / 5;

    // Result display karna
    cout << "\nTotal Marks = " << sum << endl;
    cout << "Average Marks = " << average << endl;

    return 0;   // Program successful end
} 