#include <iostream>     // Input aur Output ke liye library
using namespace std;    // Standard namespace use karne ke liye

int main()
{
    // Variables declare aur initialize kar rahe hain
    float radius = 0;            // Radius ko 0 se initialize kiya
    float circumference = 1;     // Circumference ko 1 se initialize kiya
    
    const float pi = 3.1416;     // Pi ki value constant rakhi

    // User se radius input lena
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Circumference calculate karna
    circumference = 2 * pi * radius;

    // Result display karna
    cout << "\nRadius of the circle = " << radius << endl;
    cout << "Circumference of the circle = " << circumference << endl;

    return 0;   // Program successful end
}