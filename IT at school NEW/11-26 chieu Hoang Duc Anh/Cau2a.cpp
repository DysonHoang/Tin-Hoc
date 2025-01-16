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
    ll r = 0, l = 0;
    for (char d : s)
    {
        l = l * 10 + (d - '0');
        if ((d - '0') % 2 == 0)
            r = r * 10 + (d - '0');
    }
    ll res = __gcd(l, r);
    cout << res;
}