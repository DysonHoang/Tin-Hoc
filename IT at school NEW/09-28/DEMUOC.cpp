// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
int demuocnhanh(ll n)
{
    int count = 0;
    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            count++;
            if (i != n / i)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    if (fopen("DEMUOC.INP", "r"))
    {
        freopen("DEMUOC.INP", "r", stdin);
        freopen("DEMUOC.OUT", "w", stdout);
    }
    ll n;
    cin >> n;
    ll demA = 0, demB = 0;

    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        if (demuocnhanh(x) % 2 == 0)
        {
            demA++;
        }
        else
            demB++;
    }

    cout << demA << " " << demB;
    return 0;
}
