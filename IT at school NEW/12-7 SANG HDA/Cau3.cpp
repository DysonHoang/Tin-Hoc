// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

bool cp(ll x)
{
    ll d = sqrt(x);
    return d * d == x;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    unordered_set<ll> s;
    ll max1 = LLONG_MIN;
    ll min1 = LLONG_MAX;
    ll n;
    cin >> n;
    for (ll x, i = 1; i <= n; i++)
    {
        cin >> x;
        s.insert(x);
        max1 = max(max1, x);
        min1 = min(min1, x);
    }
    for (int i = min1; i <= max1; i++)
    {
        if (!s.count(i) && cp(i))
        {
            cout << i << "\n";
            break;
        }
    }
}