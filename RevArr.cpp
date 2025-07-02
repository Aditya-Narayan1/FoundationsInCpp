#include <iostream>
using namespace std;
// Reverse an array

int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements of array are:" << endl;

    // Displaying the elements of array in reverse order
    // Using a for loop to iterate from the last index to the first index
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << "  ";
    }
    return 0;
}