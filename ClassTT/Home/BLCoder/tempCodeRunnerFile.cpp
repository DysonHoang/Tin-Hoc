#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string s, index;
    getline(cin, s);
    for (int i = 0; i <= s.length(); i++)
    {
        if ((s[i] != 'a' && s[i] != 'A'))
        {
            index += s[i];
        }
    }
    cout << index;
}
