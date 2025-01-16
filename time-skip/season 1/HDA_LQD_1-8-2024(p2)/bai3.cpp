/// 🗿 🤫🧏‍
#include <bits/stdc++.h>
#define int long long
#define fi first
#define se second
using namespace std;
int n, a[10000005], d[10000005], t;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[a[i]]++;
    }
    t = d[4];
    t += d[3];
    d[1] = max(0LL, d[1] - d[3]);
    t += d[2] / 2;
    if (d[2] % 2 == 1)
    {
        t++;
        d[1] = max(0LL, d[1] - 2);
    }
    t += (d[1] + 3) / 4;
    cout << t;
}
