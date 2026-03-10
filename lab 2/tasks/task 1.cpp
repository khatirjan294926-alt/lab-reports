#include <iostream>
using namespace std;
int main()
{
 int a = 5;
 float b = 3.5;
 char c = 'Z';
 cout << "Values:" << endl;
 cout << "a = " << a << endl;
 cout << "b = " << b << endl;
 cout << "c = " << c << endl;
 cout << "\nMemory Size:" << endl;
 cout << "Size of a: " << sizeof(a) << " bytes" << endl;
 cout << "Size of b: " << sizeof(b) << " bytes" << endl;
 cout << "Size of c: " << sizeof(c) << " byte" << endl;
 cout << "\nMemory Address:" << endl;
 cout << "Address of a: " << &a << endl;
 cout << "Address of b: " << &b << endl;
 cout << "Address of c: " << (void*)&c << endl;
 return 0;
}
