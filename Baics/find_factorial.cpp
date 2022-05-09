// FIND FACTORIAL

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is : " << fact;
    return 0;
}
