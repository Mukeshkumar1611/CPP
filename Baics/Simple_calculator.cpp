#include <iostream>
using namespace std;

int main()
{

    cout << "Enter 2 Numbers: " << endl;
    float n1, n2;
    cin >> n1 >> n2;
    cout << "Choose operation " << endl;

    char calculator;
    cin >> calculator;

    switch (calculator)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;

    default:
        cout << "Sorry This feature is not available in Calculator." << endl;

        break;
    }

    return 0;
}
