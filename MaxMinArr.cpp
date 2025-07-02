#include <iostream>
using namespace std;
// Function to find the maximum and minimum elements in an array

int main()
{
    // Declare variables for the size of the array, maximum and minimum elements
    int n, max, min;
    cout << "Enter the size of the array:";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Initialize max and min with the first element of the array
    // This ensures that we have a valid starting point for comparison
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < n; i++)
    // Traverse the array to find the maximum and minimum elements
    // This loop iterates through each element of the array
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum element in the array is: " << max << endl;
    cout << "Minimum element in the array is: " << min << endl;

    return 0;
}
