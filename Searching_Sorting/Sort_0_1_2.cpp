// Write a C++ program to sort a given array of 0s, 1s and 2s.
// In the final array put all 0s first, then all 1s and all 2s in last.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }

    int count_ = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count_++;
        }
    }

    int finl = count_ + count;
    for (int i = 0; i < count; i++)
    {
        arr[i] = 0;
    }

    for (int i = count; i < finl; i++)
    {
        arr[i] = 1;
    }

    for (int i = finl; i < n; i++)
    {
        arr[i] = 2;
    }

    cout << "Your Output: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
