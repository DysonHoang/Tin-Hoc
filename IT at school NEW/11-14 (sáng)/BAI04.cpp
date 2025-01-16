#include <bits/stdc++.h>
using namespace std;
string s;
int count1 = 0, count2 = 0;
bool XDX(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("BAI04.INP", "r"))
    {
        freopen("BAI04.INP", "r", stdin);
        freopen("BAI04.OUT", "w", stdout);
    }
    getline(cin, s);
    stringstream ss(s);
    string word;
    map<string, int> mp;

    while (ss >> word)
    {
        mp[word]++;
        if (XDX(word))
            count2++;
    }

    for (auto &it : mp)
    {
        if (it.second == 1)
            count1++;
    }

    cout << count1 << "\n"
         << count2;
}
