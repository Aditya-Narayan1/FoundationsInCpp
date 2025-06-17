#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Calculate Marks of a Student
    // This program will take the roll number and marks of a student
    int marks, rollNo;
    int const Passing_Marks = 40; // Defined passing marks as a constant

    cout << "Enter your roll number: ";
    cin >> rollNo;

    cout << "Hello , Roll No. : " << rollNo << ", welcome to the Exam Results!" << endl; // Greeting the user with their roll number

    cout << "The passing marks are: " << Passing_Marks << endl;

    cout << "Enter your marks between (1-100): ";
    cin >> marks;

    // Check if marks are valid (1-100)
    if (marks < 0 || marks > 100)
    {
        cout << "ERROR! Marks must be between 1 and 100.\n";
        return 1; // Exit program if invalid
    }
    // Display the marks entered
    cout << "You have entered: " << marks << endl;
    if (marks == Passing_Marks)
    {
        cout << "You have just passed the exam." << endl;
    }
    else if (marks > Passing_Marks && marks <= 100)
    {
        cout << "You have passed the exam." << endl;
    }
    else
    {
        cout << "You have failed the exam." << endl;
        cout << "You need to work harder. " << endl;
    }
    // Display the performance based on marks
    if (marks >= 90 && marks <= 100)
    {
        cout << "Excellent!!!" << endl;
    }
    else if (marks >= 75 && marks < 90)
    {
        cout << "GOOD!!!" << endl;
    }
    else if (marks >= 40 && marks < 75)
    {
        cout << "Nice, but You can do better." << endl;
    }
    else if (marks < Passing_Marks)
    {
        cout << "Start studying, even toddlers can do better." << endl; // Encouraging the student to improve
    }
    return 0;
}
