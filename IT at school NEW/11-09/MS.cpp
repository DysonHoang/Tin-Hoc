#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s, x;
ll dem, t, d1, a[10000000];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("MS.INP", "r"))
    {
        freopen("MS.INP", "r", stdin);
        freopen("MS.OUT", "w", stdout);
    }
    getline(cin, s);
    s[s.size()] = 'a';
    for (int i = 0; i <= s.size(); i++)
    {
        if (isdigit(s[i]))
        {
            if (s[i] != '0')
            {
                dem++;
            }
            if (isdigit(s[i]) && dem > 0)
            {
                x += s[i];
            }
        }
        if (isdigit(s[i - 1]) && isalpha(s[i]))
        {
            t = stoll(x);
            x = "";
            a[t]++;
            if (a[t] == 1)
            {
                d1++;
            }
        }
    }
    cout << d1;
}