#include <iostream>
#include <cmath>
using namespace std;
int main() {
 float base, perpendicular, hypotenuse;
 // Input values
 cout << "Enter base: ";
 cin >> base;
 cout << "Enter perpendicular: ";
 cin >> perpendicular;
 // Calculate hypotenuse
 hypotenuse = sqrt((base * base) + (perpendicular * perpendicular));
 // Display result
 cout << "Hypotenuse = " << hypotenuse << endl;
 return 0;
}