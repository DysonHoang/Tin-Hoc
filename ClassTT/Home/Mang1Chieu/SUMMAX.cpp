#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[100005], s = 0, maxx = INT_MIN, maxs = INT_MAX, minn = INT_MAX;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                for (int h = k + 1; h <= n; h++)
                {
                    maxs = min(a[k], maxs);
                    minn = min(a[h], minn);
                    s = 3 * a[i] + a[j] - 2 * maxs - minn;
                    maxx = max(s, maxx);
                }
    cout << maxx;
}