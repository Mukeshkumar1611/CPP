// Write a C++ program to find the most occurring element in an array of integers

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int most;
    cout << "Most Occuring Element is : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                most = arr[i];
            }
        }
    }
    cout << most;
    return 0;
}
