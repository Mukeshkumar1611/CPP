// Simple pattern 

// Write a C++ program to print
// *
// **
// ***
// ****
// on screen.(For n=4)


#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of Rows: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
