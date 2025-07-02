#include <iostream>
using namespace std;
// Function to find the maximum and minimum elements in an array

int main()
{
    int n, count = 0, FreqNum;
    cout << "Enter the size of the array:";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Initialize the frequency counter
    // This variable will keep track of how many times a specific number appears in the array
    cout << "Enter the number whose frequency you want to find:";
    cin >> FreqNum;

    // Traverse the array to count the frequency of the specified number
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == FreqNum)
        {
            count++;
        }
    }
    cout << " The Frequency of " << FreqNum << " in the array is: " << count << endl;
    return 0;
}