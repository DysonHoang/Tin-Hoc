// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll demuoc(ll x)
{
    ll count = 0;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
            if (i != x / i)
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
    ll n;
    cin >> n;
    ll res = demuoc(n);
    cout << res;
}