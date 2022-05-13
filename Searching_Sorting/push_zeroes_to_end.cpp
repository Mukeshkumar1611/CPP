// push zeroes to end

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array: " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int position = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[position];
            arr[position] = temp;
            position++;
        }
    }
    cout << "Your Output: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
