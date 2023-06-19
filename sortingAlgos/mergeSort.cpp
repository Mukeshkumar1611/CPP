#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int start, int mid, int end)
{
    int left = start;
    int right = mid + 1;
    vector<int> temp;
    
    while(left <= mid && right <= end)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= end)
    {
        temp.push_back(arr[right]);
        right++;
    }
    int k = 0;
    for(int i = start; i <= end; i++)
    {
        arr[i] = temp[k++];
    }
}

void merge_sort(int *arr, int start, int end)
{
    if(start >= end)
    {
        return;
    }
    int mid = (start + end)/ 2;
    merge_sort(arr, start, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    merge_sort(arr, 0, n-1);
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}
