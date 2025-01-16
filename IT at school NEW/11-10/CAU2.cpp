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
    if (fopen("CAU2.INP", "r"))
    {
        freopen("CAU2.INP", "r", stdin);
        freopen("CAU2.OUT", "w", stdout);
    }
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, k, dem = 0;
    cin >> n >> k;
    ll count = 0;
    ll a[n + 2], cnt[n + 2] = {0};

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        dem += cnt[a[i]];

        cnt[a[i]]++;

        if (i >= k)
        {
            cnt[a[i - k]]--;
        }
    }
    cout << dem;
}