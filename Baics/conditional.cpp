
#include <iostream>
using namespace std;

int main()
{
    int age;
    string sex;
    char maritalStatus;

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Sex: ";
    cin >> sex;

    cout << "Marital Status: ";
    cin >> maritalStatus;

    if (sex == "female")
    {
        cout << "You can only work in urban areas." << endl;
    }

    else if (sex == "male" && age >= 20 && age <= 40)
    {
        cout << "You can work anywhere" << endl;
    }

    else if (sex == "male" && age >= 40 && age <= 60)
    {
        cout << "You can work only in urban areas." << endl;
    }

    else
    {
        cout << "Error" << endl;
    }

    return 0;
}
