// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    ll res = 0;
    ll e_O = 16, e_H = 1, e_C = 12, e_N = 14;
    ll i = 0;
    while (i < s.size())
    {
        char nt = s[i];
        ll num = 0;
        if (nt == 'H')
            num = e_H;
        else if (nt == 'O')
            num = e_O;
        else if (nt == 'N')
            num = e_N;
        else if (nt == 'C')
            num = e_C;
        i++;
        ll count = 0;
        while (i < s.size() && s[i] >= '0' && s[i] <= '9')
        {
            count = count * 10 + (s[i] - '0');
            i++;
        }
        if (count == 0)
            count = 1;
        res += count * num;
    }
    cout << res;
}