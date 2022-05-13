// Check Array Rotation

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size: " << endl;
    cin >> n;
    int arr[n];

    cout << "Enter Elements of sorted array: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int min = arr[0], min_index = 0;
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }

    cout <<"Array is rotated by " << min_index;
    return 0;
}
