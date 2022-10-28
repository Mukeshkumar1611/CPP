// Subset Sum

#include<bits/stdc++.h>
using namespace std;

void helper(int *arr, int n, int k, int &count, int sum)
{
    if(n == 0)
    {
        if(sum == k)
        {
            count++;
        }
        return;
    }
    helper(arr + 1, n - 1, k, count, sum);
    helper(arr + 1, n - 1, k, count, sum + arr[0]);
}

int getCount(int *arr, int n, int k)
{
    int count = 0;
    int sum = 0;
    helper(arr, n, k, count, sum);
    return count;
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << getCount(arr, n , k) << endl;
    }
}

