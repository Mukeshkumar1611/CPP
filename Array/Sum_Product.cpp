// Write a program to find the sum and product of all elements of an array.

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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    cout << "Sum: " << sum << endl;
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * arr[i];
    }

    cout << "Product: " << product << endl;

    return 0;
}
