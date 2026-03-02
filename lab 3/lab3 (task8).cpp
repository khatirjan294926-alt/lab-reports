#include <iostream>
using namespace std;
int main() {
 // Star resistances
 float R1 = 0, R2 = 0, R3 = 0;
 
 // Delta resistances
 float RAB = 0, RBC = 0, RCA = 0;
 // Input star values
 cout << "Enter Star Resistance R1: ";
 cin >> R1;
 cout << "Enter Star Resistance R2: ";
 cin >> R2;
 cout << "Enter Star Resistance R3: ";
 cin >> R3;
 // Star to Delta formulas
 float sum = (R1*R2) + (R2*R3) + (R3*R1);
 RAB = sum / R3;
 RBC = sum / R1;
 RCA = sum / R2;
 // Display results
 cout << "Delta Resistance RAB = " << RAB << endl;
 cout << "Delta Resistance RBC = " << RBC << endl;
 cout << "Delta Resistance RCA = " << RCA << endl;
 return 0;
}