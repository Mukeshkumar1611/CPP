// Write a C++ program to find the largest three elements in an array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of Array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter Elemets : " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    int third_largest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            third_largest = second_largest;
            second_largest = largest;
            largest = arr[i];
        }

        else if (arr[i] > second_largest)
        {
            third_largest = second_largest;
            second_largest = arr[i];
        }

        else if (arr[i] > third_largest)
        {
            third_largest = arr[i];
        }
    }

    cout << "Largest: " << largest << endl;
    cout << "Second Largest: " << second_largest << endl;
    cout << "Third Largest: " << third_largest << endl;

    return 0;
}
