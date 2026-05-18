#include <iostream>
using namespace std;

// ======================================================
// Function Prototypes
// ======================================================

// Marks input lene ka function
void inputMarks(int marks[], int n);

// Average calculate karne ka function
float calculateAverage(int marks[], int n);

// Maximum marks find karne ka function
int findMaximum(int marks[], int n);

// Minimum marks find karne ka function
int findMinimum(int marks[], int n);

// Relative grading assign karne ka function
char assignGrade(int marks, float average);

// Final result display karne ka function
void displayResult(int marks[], int n, float average);

// ======================================================
// Main Function
// ======================================================

int main()
{
    // Roman Urdu:
    // n variable students ki total quantity store karega

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    // Roman Urdu:
    // Array students ke marks store karega

    int marks[n];

    // Marks input function call
    inputMarks(marks, n);

    // Average calculate karna
    float average = calculateAverage(marks, n);

    // Maximum marks find karna
    int maximum = findMaximum(marks, n);

    // Minimum marks find karna
    int minimum = findMinimum(marks, n);

    // Final result display karna
    displayResult(marks, n, average);

    cout << "\n============================\n";

    cout << "Class Average = " << average << endl;
    cout << "Maximum Marks = " << maximum << endl;
    cout << "Minimum Marks = " << minimum << endl;

    cout << "============================\n";

    return 0;
}

// ======================================================
// Function: inputMarks()
// ======================================================

void inputMarks(int marks[], int n)
{
    // Roman Urdu:
    // Ye loop har student ke marks input lene ke liye use ho raha hai

    for(int i = 0; i < n; i++)
    {
        cout << "Enter marks of student "
             << i + 1 << ": ";

        cin >> marks[i];
    }
}

// ======================================================
// Function: calculateAverage()
// ======================================================

float calculateAverage(int marks[], int n)
{
    // Roman Urdu:
    // sum variable total marks store karega

    int sum = 0;

    // Roman Urdu:
    // Sare marks add karne ke liye loop use kiya

    for(int i = 0; i < n; i++)
    {
        // Roman Urdu:
        // Har iteration mein marks add ho rahe hain

        sum = sum + marks[i];
    }

    // Roman Urdu:
    // Average return ki ja rahi hai

    return (float)sum / n;
}

// ======================================================
// Function: findMaximum()
// ======================================================

int findMaximum(int marks[], int n)
{
    // Roman Urdu:
    // Pehle element ko maximum maan liya

    int max = marks[0];

    // Roman Urdu:
    // Har value compare ho rahi hai

    for(int i = 1; i < n; i++)
    {
        // Roman Urdu:
        // Agar current value bari ho to max update hoga

        if(marks[i] > max)
        {
            max = marks[i];
        }
    }

    return max;
}

// ======================================================
// Function: findMinimum()
// ======================================================

int findMinimum(int marks[], int n)
{
    // Roman Urdu:
    // Pehle element ko minimum maan liya

    int min = marks[0];

    // Roman Urdu:
    // Har value compare ho rahi hai

    for(int i = 1; i < n; i++)
    {
        // Roman Urdu:
        // Agar current value choti ho to min update hoga

        if(marks[i] < min)
        {
            min = marks[i];
        }
    }

    return min;
}

// ======================================================
// Function: assignGrade()
// ======================================================

char assignGrade(int marks, float average)
{
    // Roman Urdu:
    // Relative grading average ke according apply ho rahi hai

    if(marks >= average + 15)
    {
        return 'A';
    }
    else if(marks >= average + 5)
    {
        return 'B';
    }
    else if(marks >= average - 5)
    {
        return 'C';
    }
    else if(marks >= average - 15)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

// ======================================================
// Function: displayResult()
// ======================================================

void displayResult(int marks[], int n, float average)
{
    cout << "\n========== FINAL RESULT ==========\n";

    // Roman Urdu:
    // Ye loop har student ka marks aur grade display karega

    for(int i = 0; i < n; i++)
    {
        // Roman Urdu:
        // assignGrade function grade return karega

        char grade = assignGrade(marks[i], average);

        cout << "Student " << i + 1
             << " | Marks = " << marks[i]
             << " | Grade = " << grade
             << endl;
    }
}