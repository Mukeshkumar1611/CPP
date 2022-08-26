//  Write a C++ program to find the smallest three elements in an array.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of Array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter Elements : " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;
    int third_smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            third_smallest = second_smallest;
            second_smallest = smallest;
            smallest = arr[i];
        }

        else if (arr[i] < second_smallest)
        {
            third_smallest = second_smallest;
            second_smallest = arr[i];
        }

        else if (arr[i] < third_smallest)
        {
            third_smallest = arr[i];
        }
    }

    cout << "Smallest: " << smallest << endl;
    cout << "Second Smallest: " << second_smallest << endl;
    cout << "Third Smallest: " << third_smallest << endl;
    return 0;
}
