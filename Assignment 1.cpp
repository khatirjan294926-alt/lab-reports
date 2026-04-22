#include <iostream>
using namespace std;

int main() {

    // i. Variables declare
    double voltage, current, resistance;

    // ii. Welcome message
    cout << "Welcome to Object Oriented Programming in C++!" << endl;

    // iii. Age input
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // iv. Temperature check
    double temperature;
    cout << "Enter temperature: ";
    cin >> temperature;
    if (temperature > 100)
        cout << "Overheating detected!" << endl;

    // v. Circle area
    double r;
    cout << "Enter radius: ";
    cin >> r;
    double area = 3.14159 * r * r;
    cout << "Area of circle: " << area << endl;

    // vi. Print x, y, z
    int x = 1, y = 2, z = 3;
    cout << "Values: " << x << "," << y << "," << z << endl;

    // vii. Sum of voltage and current
    cout << "Enter voltage and current: ";
    cin >> voltage >> current;
    double total = voltage + current;
    cout << "Total (voltage + current): " << total << endl;

    // viii. Division by zero check
    int denominator;
    cout << "Enter denominator: ";
    cin >> denominator;
    if (denominator == 0)
        cout << "Error: Division by zero" << endl;

    // ix. Increment count
    int count = 0;
    cout << "Count after increment: " << ++count << endl;

    // x. Three float inputs
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // xi. Series resistance
    double r1, r2, r3;
    cout << "Enter three resistances (series): ";
    cin >> r1 >> r2 >> r3;

    cout << "Total Series Resistance: " << r1 + r2 + r3 << endl;

    // xii. Parallel resistance (with check)
    if (r1 == 0 || r2 == 0 || r3 == 0) {
        cout << "Invalid resistance value for parallel!" << endl;
    } else {
        double parallel = 1 / ((1/r1) + (1/r2) + (1/r3));
        cout << "Total Parallel Resistance: " << parallel << endl;
    }

    // xiii. Voltage division
    double V, R1, R2;
    cout << "Enter V, R1, R2: ";
    cin >> V >> R1 >> R2;

    if ((R1 + R2) == 0) {
        cout << "Invalid values for voltage division!" << endl;
    } else {
        double V2 = (V * R2) / (R1 + R2);
        cout << "Voltage across R2: " << V2 << endl;
    }

    // xiv. Current division (correct formula)
    if (R1 == 0 || R2 == 0) {
        cout << "Invalid resistance for current division!" << endl;
    } else {
        double Req = (R1 * R2) / (R1 + R2); // equivalent resistance
        double I_total = V / Req;           // total current
        double I2 = I_total * (R1 / (R1 + R2)); // current through R2
        cout << "Current through R2: " << I2 << endl;
    }

    // xv. GPA calculation
    int subjects;
    cout << "Enter number of subjects: ";
    cin >> subjects;

    double totalGradePoints = 0, totalCreditHours = 0;

    for (int i = 1; i <= subjects; i++) {
        double grade, credit;

        cout << "Enter grade points for subject " << i << ": ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalGradePoints += grade * credit;
        totalCreditHours += credit;
    }

    if (totalCreditHours == 0) {
        cout << "Invalid GPA calculation!" << endl;
    } else {
        double GPA = totalGradePoints / totalCreditHours;
        cout << "Semester GPA: " << GPA << endl;
    }

    return 0;
}