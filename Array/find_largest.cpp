// Write a C++ program to find the largest element of a given array of integers.

#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;
    
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for(int i=0;i<5;i++){
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }

    }
    cout <<"Largest Element is : " <<arr[0];

    return 0;
}
