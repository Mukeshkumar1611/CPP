// FIND UNIQUE

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array: " << endl;
    cin >> n;
    
    int arr[n];
    cout << "Enter Elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout <<"Unique Element in array is : " <<arr[i];
        }
    }
    return 0;
}
