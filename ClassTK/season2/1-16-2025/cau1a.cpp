// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

ll rev(ll x, ll y)
{
    ll a = 0, b = 0;
    while (x)
    {
        a = a * 10 + x % 10;
        x /= 10;
    }
    while (y)
    {
        b = b * 10 + y % 10;
        y /= 10;
    }
    if (a >= b)
        return a;
    else
        return b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    cin >> a >> b;
    cout << rev(a, b);
    return 0;
}