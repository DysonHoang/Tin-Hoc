#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

int tlp(int x)
{
    ll a, s = 0;
    while (x > 0)
    {
        a = x % 10;
        s += a * a * a;
        x /= 10;
    }
    return s;
}

ll tcs(ll x)
{
    ll tong = 0;
    while (x > 0)
    {
        tong += x % 10;
        x /= 10;
    }
    return tong;
}

bool ktnt(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}

ll check(ll x)
{
    if (ktnt(x) && ktnt(tcs(x)))
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Cau2.INP", "r"))
    {
        freopen("Cau2.INP", "r", stdin);
        freopen("Cau2.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    cout << tlp(n) << " " << check(n) << endl;
}
