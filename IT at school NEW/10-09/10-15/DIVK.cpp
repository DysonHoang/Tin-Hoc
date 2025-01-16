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
        if (fopen("DIVK.INP", "r"))
    {
        freopen("DIVK.INP", "r", stdin);
        freopen("DIVK.OUT", "w", stdout);
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;

    vector<ll> uoc;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            uoc.push_back(i);
            if (i != n / i)
            {
                uoc.push_back(n / i);
            }
        }
    }
    sort(uoc.begin(), uoc.end());

    if (k <= uoc.size())
    {
        cout << uoc[k - 1];
    }
    else
        cout << -1;
}