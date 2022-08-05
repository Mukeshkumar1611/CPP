// Remove Duplicates

#include <iostream>
using namespace std;

int length(char arr[])
{
    if (arr[0] == '\0')
    {
        return 0;
    }
    int sml = length(arr + 1);
    return 1 + sml;
}

void removeDuplicates(char arr[], int start)
{
    if (arr[start] == '\0')
    {
        return;
    }
    removeDuplicates(arr, start + 1);

    if (arr[start] == arr[start - 1])
    {
        int l = length(arr);
        int i;
        for (i = start; i < l; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[i - 1] = '\0';
    }
}

void removeDuplicates(char arr[])
{
    removeDuplicates(arr, 0);
}

int main()
{
    char arr[50];
    cout << "Enter string : ";
    cin.getline(arr, 50);

    removeDuplicates(arr);
    cout << "Output : " << arr << endl;
    return 0;
}
