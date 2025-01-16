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

    int m, n;
    cin >> m >> n;
    string a, b;
    cin >> a >> b;

    int dp[2501] = {}, prev[2501] = {};

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[j] = prev[j - 1] + 1;
            }
            else
            {
                dp[j] = (prev[j] > dp[j - 1]) ? prev[j] : dp[j - 1];
            }
        }
        for (int j = 0; j <= n; j++)
        {
            prev[j] = dp[j];
        }
    }

    cout << dp[n];
    return 0;
}
