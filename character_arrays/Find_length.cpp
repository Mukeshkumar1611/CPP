// To find Length of a Character Array

#include <iostream>
using namespace std;

int len(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[100];
    cout << "Enter String: " << endl;
    cin.getline(arr, 100);

    cout << "Length Of String is : " << len(arr) << endl;

    return 0;
}
