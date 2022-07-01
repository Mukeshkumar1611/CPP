// Take 10 integer inputs from user and store them in an array.
// Now, copy all the elements in another array but in reverse order

#include<iostream>
using namespace std;

int main()
{
    int arr[10],brr[10];
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }

    int j = 0;
    for (int i=9;i>=0;i--){
        brr[i] = arr[j];
        j++;
    }

    for(int i=0;i<10;i++){
        cout << brr[i] << " ";
    }
    return 0;
}
