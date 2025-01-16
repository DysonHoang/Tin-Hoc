// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
#define MOD 100000007
#define MAXX 1000005
#define int long long
using namespace std;
int n, dem = 0, d1 = 1, d2 = 1, d3 = 1, a[MAXX], b[MAXX], c[MAXX];
main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
        cin >> c[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    sort(c + 1, c + n + 1);
    while (d1 <= n && d2 <= n && d3 <= n)
    {
        if (a[d1] < b[d2] && b[d2] < c[d3])
        {
            dem++;
            d1++;
            d2++;
            d3++;
        }
        else if (a[d1] > b[d2] && a[d1] < c[d3])
            d2++;
        else if (a[d1] > b[d2] && a[d1] > c[d3])
        {
            d3++;
            d2++;
        }
        else if (a[d1] < b[d2] && b[d2] > c[d3])
            d3++;
    }
    cout << dem;
}