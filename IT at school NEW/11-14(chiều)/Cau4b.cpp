// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if (s.length() < 8)
        return false;
    bool c1 = false, c2 = false, c3 = false, c4 = false;
    for (char c : s)
    {
        if (c >= '0' && c <= '9')
            c1 = true;
        else if (c >= 'a' && c <= 'z')
            c2 = true;
        else if (c >= 'A' && c <= 'Z')
            c3 = true;
        else
            c4 = true;
    }

    return c1 && c2 && c3 && c3;
}

int main()
{
    if (fopen("CAU4B.INP", "r"))
    {
        freopen("CAU4B.INP", "r", stdin);
        freopen("CAU4B.OUT", "w", stdout);
    }
    int T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;
        if (check(s))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
