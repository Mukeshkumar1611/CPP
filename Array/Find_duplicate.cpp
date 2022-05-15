//  Find Duplicate

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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << "Duplicate Element in this array is : " << arr[i];
            }
        }
    }

    return 0;
}
