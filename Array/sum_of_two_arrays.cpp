// SUM OF TWO ARRAYS

#include <iostream>
using namespace std;
int main()
{
    int n1, n2;

    cout << "Enter Size of Array1: " << endl;
    cin >> n1;

    int arr1[n1];

    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter Size of Array2: " << endl;
    cin >> n2;

    int arr2[n2];

    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    int n3 = n1 > n2 ? n1 : n2;
    int sum[n3];

    int carry = 0;

    int i = n1 - 1;
    int j = n2 - 1;
    int k = n3 - 1;

    while (k >= 0)
    {
        int digit = carry;

        if (i >= 0)
        {
            digit = digit + arr1[i];
        }

        if(j >=0)
        {
            digit = digit + arr2[j];
        }

        carry = digit / 10;
        digit = digit % 10;

        sum[k] = digit;

        i--;
        j--;
        k--;
    }

    cout << "Sum of Array1 and Array2 : " << endl;

    if(carry != 0){
        cout << carry;
    }

    for(int val: sum){
        cout << val << " ";
    }

    return 0;
}
