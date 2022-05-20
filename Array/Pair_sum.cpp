// PAIR SUM

#include <iostream>
using namespace std;

int pairSum(int arr[], int n, int x)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                sum = sum + 1;
            }
        }
    }

    return sum;
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

    cout << pairSum(arr, n, x) << endl;

    return 0;
}
