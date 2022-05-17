
// Most Frequent in array

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Size of Array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter Elements: " << endl;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    int mf = -1;            // Initializing Most Frequent;
    int maxCount = 0;       // For counting Whch element occurs most times

    for (int i = 0; i < n; i++)
    {
        int count = 0;      // Counting Occurence of each element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            mf = arr[i];
        }
    }
    cout << "Most Occuring Element is : " << mf << endl;

    return 0;
}
