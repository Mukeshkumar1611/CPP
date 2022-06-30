// Check whether a year is leap or not.

#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter Year You want to check: " << endl;
    cin >> year;

    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            cout << "Leap Year" << endl;
        }
        else
        {
            cout << "Not A Leap Year" << endl;
        }
    }

    else
    {
        if (year % 4 == 0)
        {
            cout << "Leap Year" << endl;
        }
        else
        {
            cout << "Not A Leap Year" << endl;
        }
    }

    return 0;
}
