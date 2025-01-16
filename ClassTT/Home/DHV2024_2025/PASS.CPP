#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string s;
        getline(cin, s);

        string longest;
        string current;
        map<char, int> mp;

        for (char c : s)
        {
            if (c != ' ' && mp[c] == 0)
            {
                current += c;
                mp[c]++;
            }
            else
            {
                if (current.length() > longest.length())
                {
                    longest = current;
                }
                current.clear();
                mp.clear();
                if (c != ' ')
                {
                    current += c;
                    mp[c]++;
                }
            }
        }

        if (current.length() > longest.length())
        {
            longest = current;
        }

        cout << longest << "\n";
    }

    return 0;
}
