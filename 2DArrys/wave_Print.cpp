// Wave Print

#include <iostream>
using namespace std;
int main()
{
    int rows, colums;
    cout << "Enter Number of Rows: " << endl;
    cin >> rows;
    cout << "Enter Number of Columns: " << endl;
    cin >> colums;

    int arr[rows][colums];
    cout << "Enter Elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < colums; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int j = 0; j < colums; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < rows; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = colums - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
    return 0;
}
