#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= (n - i) * 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
