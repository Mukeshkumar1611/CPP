// Merge Sort

#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int size = (end - start) + 1;
    int i = start;
    int j = mid + 1;
    int k = 0;
    int *output = new int[size];

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            output[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            output[k] = arr[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        output[k] = arr[i];
        i++;
        k++;
    }

    while (j <= end)
    {
        output[k] = arr[j];
        j++;
        k++;
    }
    int m = 0;
    for (int i = start; i <= end; i++)
    {
        arr[i] = output[m];
        m++;
    }
    delete[] output;
}

void mergeSort(int *arr, int start, int end)
{

    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, end);
}
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start = 0;
    int end = n - 1;
    mergeSort(arr, start, end);
    cout << "Output : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
