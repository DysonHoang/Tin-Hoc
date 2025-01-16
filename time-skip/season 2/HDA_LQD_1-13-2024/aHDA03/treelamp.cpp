/// sigma boy🤪🤪🤪
#include <bits/stdc++.h>
#define siu                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define MOD 100000007
#define MAXX 1000005
#define int long long
using namespace std;
int n, kq = 0, a[MAXX], dp[MAXX];
main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            if (a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);
    for (int i = 0; i < n; i++)
        kq = max(kq, dp[i]);
    cout << kq << endl;
}