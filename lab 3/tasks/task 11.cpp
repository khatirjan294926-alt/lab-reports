#include <iostream>
#include <cmath>
using namespace std;
int main() {
 float a, b, c;
 float discriminant, root1, root2;
 // Input coefficients
 cout << "Enter values of a, b, c: ";
 cin >> a >> b >> c;
 // Calculate discriminant
 discriminant = (b*b) - (4*a*c);
 if(discriminant >= 0) {
 // Real roots
 root1 = (-b + sqrt(discriminant)) / (2*a);
 root2 = (-b - sqrt(discriminant)) / (2*a);
 cout << "Root 1 = " << root1 << endl;
 cout << "Root 2 = " << root2 << endl;
 } else {
 cout << "Roots are imaginary." << endl;
 }
 return 0;
}