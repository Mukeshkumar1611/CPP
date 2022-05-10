// Write a C++ program to separate 0s and 1s from a given array of values 0 and 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of Array: " << endl;
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

    for (int i = 0; i < count; i++)
    {
        arr[i] = 0;
    }

    for (int i = count; i < n; i++)
    {
        arr[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
