// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll freq[Mx + 5] = {0};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, x, min1 = LLONG_MAX;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }

    for (ll i = 0; i <= Mx; i++)
    {
        if (freq[i] > 0 && freq[i] < min1)
        {
            min1 = freq[i];
        }
    }

    ll dem = 0;
    for (ll i = 0; i <= Mx; i++)
    {
        if (freq[i] == min1)
        {
            dem++;
        }
    }
    cout << dem;
}
