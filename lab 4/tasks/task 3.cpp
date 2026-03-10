#include <iostream>
using namespace std;
int main()
{
 int choice;
 double value, result;
 cout << "1 -> Kilometers to Meters" << endl;
 cout << "2 -> Meters to Centimeters" << endl;
 cout << "3 -> Kilograms to Grams" << endl;
 cout << "4 -> Celsius to Fahrenheit" << endl;
 cout << "Enter your choice: ";
 cin >> choice;
 switch(choice)
 {
 case 1:
 cin >> value;
 result = value * 1000;
 cout << result;
 break;
 case 2:
 cin >> value;
 result = value * 100;
 cout << result;
 break;
 case 3:
 cin >> value;
 result = value * 1000;
 cout << result;
 break;
 case 4:
 cin >> value;
 result = (value * 9/5) + 32;
 cout << result;
 break;
 default:
 cout << "Invalid choice";
 }
 return 0;
}