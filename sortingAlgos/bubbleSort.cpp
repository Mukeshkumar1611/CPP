#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    int i = 1;
    while (i < n)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        i++;
    }
}

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;

    int arr[n];
    cout << "Enter Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    // cout << "Your sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
