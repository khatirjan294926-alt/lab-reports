#include <iostream> // Header file for input and output
using namespace std;
int main()
{
 float radius, area; // Declare variables
 
 cout << "Enter radius of circle: ";
 cin >> radius; // Take radius input
 
 area = 3.1416 * radius * radius; // Formula: πr²
 
 cout << "Area of Circle = " << area; // Display area
 
 return 0;
}