#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < n)
            {
                cout << i << " ";
            }
            else
            {
                cout << i;
            }
        }
        cout << endl;
    }
}
