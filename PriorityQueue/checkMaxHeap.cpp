// Check Max-Heap

#include <iostream>
#include <queue>
using namespace std;

bool isMaxHeap(int arr[], int size)
{
    priority_queue<int> pq;
    for (int i = 0; i < size; i++)
    {
        pq.push(arr[i]);
    }

    for (int i = 0; 2 * i + 1 < size; i++)
    {
        int leftIdx = 2 * i + 1;
        int rightIdx = 1 + leftIdx;
        if (arr[i] < arr[leftIdx] or arr[i] < arr[rightIdx])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int *arr = new int[size];
    cout << "Enter elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (isMaxHeap(arr, size))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}
