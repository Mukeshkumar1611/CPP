// Extract Unique characters

#include <iostream>
#include <unordered_map>
using namespace std;

string uniqueChar(string str)
{
    unordered_map<char, int> freq;

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i]]++;
    }

    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (freq[str[i]] > 0)
        {
            ans += str[i];
            freq[str[i]] = 0;
        }
        else
        {
            continue;
        }
    }
    return ans;
}

int main()
{
    string ab;
    cout << "Enter string : ";
    cin >> ab;
    cout << "Output : " << uniqueChar(ab) << endl;
    return 0;
}
