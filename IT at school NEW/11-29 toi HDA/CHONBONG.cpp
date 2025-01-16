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
    ll n, k;
    cin >> n >> k;
    ll cnt[200005];
    for (ll x, i = 1; i <= n; i++)
    {
        cin >> x;
        cnt[x]++;
    }
    sort(cnt + 1, cnt + 1 + k);
    if (n <= 2 * cnt[k])
        cout << 2 * (n - cnt[k]);
    else
        cout << 2 * (n / 2);
}