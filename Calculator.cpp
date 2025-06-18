#include <iostream>
using namespace std;

int main()
{
    // Constructing a calculator using I/O, operators, Control Structures and Switch Case
    float num1, num2, Result;
    char opp;

    cout << "=============================" << endl;
    cout << "     C++ BASIC CALCULATOR    " << endl;
    cout << "=============================" << endl;

    cout << "Enter the first number:" << endl;
    cin >> num1;

    cout << "Enter the second number:" << endl;
    cin >> num2;

    cout << "Enter the operation you wish to perform (+, -, *, /):" << endl;
    cin >> opp;

    cout << "You have entered: " << num1 << " " << opp << " " << num2 << endl;

    // Using switch case to perform the operation based on user input
    switch (opp)
    {
    case '+':
        Result = num1 + num2;
        cout << "The Result is: " << Result << endl;
        break;
    case '-':
        Result = num1 - num2;
        cout << "The Result is: " << Result << endl;
        break;
    case '*':
        Result = num1 * num2;
        cout << "The Result is: " << Result << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            Result = num1 / num2;
            cout << "The Result is: " << Result << endl;
        }
        else
        {
            cout << "Error: Division by zero is Undefined." << endl;
        }
        break;
    default:
        cout << "Invalid operation entered. Please use +, -, *, or /." << endl;
        break;
    }

    cout << "-----------------------------" << endl;
    cout << "Thanks for using the Calculator!" << endl;
    cout << "Keep Calculating !!" << endl;

    return 0;
}
