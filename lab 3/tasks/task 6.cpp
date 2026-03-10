#include <iostream>      // Input aur Output ke liye library
using namespace std;     // Standard namespace use karne ke liye

int main()
{
    // Variables declare aur initialize kar rahe hain
    float length = 0;        // Length ko 0 se initialize kiya
    float width = 0;         // Width ko 0 se initialize kiya
    float area = 1;          // Area ko 1 se initialize kiya
    float perimeter = 1;     // Perimeter ko 1 se initialize kiya

    // User se length aur width input lena
    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Area calculate karna
    area = length * width;

    // Perimeter calculate karna
    perimeter = 2 * (length + width);

    // Result display karna
    cout << "\nLength = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Area of Rectangle = " << area << endl;
    cout << "Perimeter of Rectangle = " << perimeter << endl;

    return 0;   // Program successful end
}