// Length of character array

#include <iostream>
using namespace std;

int length(char arr[])
{
    if (arr[0] == '\0')
    {
        return 0;
    }
    int smallAns = length(arr + 1);
    return 1 + smallAns;
}

int main()
{
    char arr[100];
    cout << "Enter string : ";
    cin.getline(arr, 100);
    cout << "Length : " << length(arr) << endl;
    return 0;
}
