// SORT 0, 1, 2

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of Array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter Elements: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    int i = 0;
    while (i <= end)
    {
        if (arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[start];
            arr[start] = temp;
            start++;
            i++;
        }

        else if (arr[i] == 2)
        {
            int temp = arr[i];
            arr[i] = arr[end];
            arr[end] = temp;
            end--;
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

