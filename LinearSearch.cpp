#include <iostream>
using namespace std;

int main()
{
    int n, i, target;

    cout << "=============================" << endl;
    cout << "     C++ Linear Search       " << endl;
    cout << "=============================" << endl;

    cout << "Enter the size of array: " << endl;
    cin >> n;

    cout << "Enter the number you want to search for: " << endl;
    cin >> target;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements are: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nSearching for " << target << " in the array..." << endl;

    //  Proper linear search
    bool found = false;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << " Element not found in the array!!" << endl;
    }

    return 0;
}