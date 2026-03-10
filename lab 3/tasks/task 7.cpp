#include <iostream>
using namespace std;

int main()
{
    // Step 1: Declare variables
    float R1 = 0, R2 = 0;     // Resistances
    float IT = 0;             // Total current
    float I1 = 0, I2 = 0;     // Branch currents

    // Step 2: Take input from user
    cout << "Enter value of Resistance R1 (ohms): ";
    cin >> R1;

    cout << "Enter value of Resistance R2 (ohms): ";
    cin >> R2;

    cout << "Enter Total Current (amps): ";
    cin >> IT;

    // Step 3: Calculate branch currents using Current Divider Rule
    I1 = IT * (R2 / (R1 + R2));   // Current through R1
    I2 = IT * (R1 / (R1 + R2));   // Current through R2

    // Step 4: Display results
    cout << "\n----- Results -----" << endl;
    cout << "Resistance R1 = " << R1 << " ohms" << endl;
    cout << "Resistance R2 = " << R2 << " ohms" << endl;
    cout << "Total Current = " << IT << " A" << endl;
    cout << "Current through R1 (I1) = " << I1 << " A" << endl;
    cout << "Current through R2 (I2) = " << I2 << " A" << endl;

    return 0;
}