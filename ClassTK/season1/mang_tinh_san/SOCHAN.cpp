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
    ll dp[1005] = {0};
    ll n, q;
    cin >> n >> q;
    ll a[n + 2];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = dp[i - 1];
        if (a[i] % 2 == 0)
            dp[i]++;
    }

    while (q--)
    {
        ll d, c;
        cin >> d >> c;
        cout << dp[c] - dp[d - 1] << " ";
    }
}
