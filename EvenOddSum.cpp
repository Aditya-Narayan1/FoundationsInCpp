#include <iostream>
using namespace std;

int main()
{
    // Program to calculate the sum of even and odd numbers in an array
    int EvenSum = 0, OddSum = 0, n, i;

    cout << "Enter the size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: " << endl;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // If else logic to calculate even and odd sum
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            EvenSum += arr[i]; // (EvenSum = EvenSum + arr[i];)
        }
        else
        {
            OddSum += arr[i];
        }
    }
    cout << "Even Sum: " << EvenSum << endl;
    cout << "Odd Sum: " << OddSum << endl;

    return 0;
}
