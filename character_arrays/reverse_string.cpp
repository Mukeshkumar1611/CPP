// Programe to reverse a char array

#include <iostream>
using namespace std;

int length(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char *arr, int len)
{
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char s[20];

    cout << "Enter string : ";

    cin.getline(s, 20);

    reverse(s, length(s));

    cout <<"Output : "<< s << endl;

    return 0;
}
