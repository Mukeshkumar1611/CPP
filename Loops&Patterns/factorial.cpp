
#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = n;
    while (n > 1)
    {
        n--;
        fact = fact * n;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Factorial : " << factorial(n) << endl;
    return 0;
}