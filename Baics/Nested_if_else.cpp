// Nested If

#include <iostream>
using namespace std;

int main()
{
    int savings;
    cin >> savings;
    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "Roadtrip with Neha/n";
        }
        else
        {
            cout << "shopping with neha/n";
        }
    }
    else if (savings > 2000)
    {
        cout << "Go woith rashmi\n";
    }
    else
    {
        cout << "Go with friends\n";
    }
    return 0;
}
