
// Take 20 integer inputs from user and print the following:
// number of positive numbers
// number of negative numbers
// number of odd numbers
// number of even numbers
// number of zeroes.

#include<iostream>
using namespace std;

int main()
{
    int positive = 0;
    int negative = 0;
    int odd = 0;
    int even = 0;
    int zero = 0;

    int n;
    cout << "Enter Number Of Elements: " << endl;
    cin >> n;

    int z[n]; 

    cout << "Enter Elements: " << endl;
    for(int i=0;i<5;i++){
        cin >> z[i];

        if(z[i] > 0){
            positive ++;
        }

        else if(z[i] < 0){
            negative++;
        }

        else{
            zero++;
        }

        if(z[i] % 2==0){
            even ++;
        }

        else{
            odd++;
        }
    }

    cout << "Positive: " << positive << endl;
    cout << "Negative: " <<negative << endl;
    cout << "Odd: " << odd << endl;
    cout << "Even: " <<even << endl;
    cout << "Zero: " << zero << endl;

    return 0;
}
