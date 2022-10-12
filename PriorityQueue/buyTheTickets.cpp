// Buy the tickets

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int buyTicket(int *arr, int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    int count = 0;
    while (!pq.empty())
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= pq.top())
            {
                count++;
                if (i == k)
                {
                    return count;
                }
                arr[i] = INT_MIN;
                pq.pop();
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter value of k : ";
    cin >> k;

    cout << "Output : ";
    cout << buyTicket(arr, n, k);

    delete[] arr;
}
