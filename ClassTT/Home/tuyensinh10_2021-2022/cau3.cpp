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
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    vector<ll> d(Mx + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i * 2; j <= n; j += i)
        {
            d[j] += i;
        }
    }
    ll dem = 0;
    for (int i = 1; i <= n; ++i)
    {
        ll j = d[i];
        if (j > i && j <= n && d[j] == i)
        {
            dem++;
        }
    }
    cout << dem;
}