// Program To Find Element in an Array

#include<iostream>
using namespace std;
int main()
{
    int n; //array size
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int find;
    cin >> find;  //Element To find
    for(int i=0;i<n;i++){
        if(arr[i]==find){
            cout << i;
        }
    }
    return 0;
}
