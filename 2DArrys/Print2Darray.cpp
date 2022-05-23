#include <iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout << "Enter Number of Rows: " << endl;
    cin >> rows;

    cout << "Enter Number of Columns: " << endl;
    cin >> columns;

    int arr[rows][columns];

    cout << "Enter " << rows * columns << " Elements : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "Your 2d Array is : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
