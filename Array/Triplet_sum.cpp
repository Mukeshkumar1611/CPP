// TRIPLET SUM

#include <iostream>
using namespace std;

void tripletSum(int arr[], int n, int x)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    sum = sum + 1;
                }
            }
        }
    }
    cout << sum;
}

int main()
{
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    cout << "Enter Elements: " << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter x: " << endl;
    cin >> x;

    cout << "Your Output: " << endl;

    tripletSum(arr, n, x);

    return 0;
}
