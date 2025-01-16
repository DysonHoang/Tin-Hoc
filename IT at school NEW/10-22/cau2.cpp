#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("CAU2.INP", "r"))
    {
        freopen("CAU2.INP", "r", stdin);
        freopen("CAU2.OUT", "w", stdout);
    }
    string s;
    cin >> s;

    ll index = 0, ans = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            index = index * 10 + s[i] - '0';
        else
        {
            ans += index;
            index = 0;
        }
    }
    cout << ans;
}
