#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    int *ptr = &n;
    int fact = 1;
    int *facptr = &fact;

    for (int i = 1; i <= *ptr; i++)
    {
        *facptr = *facptr * i;
    }
    cout << "Factorial : " << *facptr;
    return 0;
}
