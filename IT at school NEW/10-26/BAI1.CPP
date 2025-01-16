// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll ans(ll x)
{
    ll count3 = x / 3;
    ll count5 = x / 5;
    ll countall = x / 15;
    return count3 + count5 - countall;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll queue;
    cin >> queue;
    if (fopen("BAI1.INP", "r"))
    {
        freopen("BAI1.INP", "r", stdin);
        freopen("BAI1.OUT", "w", stdout);
    }
    while (queue--)
    {
        ll x;
        cin >> x;
        cout << ans(x) << "\n";
    }
}