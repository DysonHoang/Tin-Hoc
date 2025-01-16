#include <bits/stdc++.h>
using namespace std;
int n, k, m, dem = 0, f[1000000], a[1000000];
int maxx, minn, vtr, ans, l, r, dp[1000000], vp[1000000];

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
        if (f[a[i]] > 1)
        {
            vtr = i - dp[a[i]];
            if (vtr < k)
            {
                dem++;
                vp[dem] = a[i];
            }
        }
        dp[a[i]] = i;
    }
    if (dem == 0)
    {
        cout << "-1";
        return 0;
    }
    sort(vp + 1, vp + 1 + dem);
    cout << vp[1];
}