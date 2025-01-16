// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
bool bt(ll x)
{
    ll du;
    if (x < 11)
        return 0;
    while (x > 0)
    {
        du = x % 10;
        x = x / 10;
        if (x % 10 >= du)
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("Bacthang.INP", "r"))
    {
        freopen("Bacthang.INP", "r", stdin);
        freopen("Bacthang.OUT", "w", stdout);
    }
    ll n, dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;

        if (bt(x))
            dem++;
    }
    cout << dem;
}
