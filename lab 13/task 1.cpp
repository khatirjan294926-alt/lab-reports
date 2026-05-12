#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
    string address;
};

int main() {

    // Declare and initialize structure variable
    Person person1 = {"Aziz Ahmad", 21, "Peshawar"};

    // Display values
    cout << "Person Details:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}