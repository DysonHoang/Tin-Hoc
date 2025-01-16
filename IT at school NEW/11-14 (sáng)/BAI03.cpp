// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    if (fopen("BAI03.INP", "r"))
    {
        freopen("BAI03.INP", "r", stdin);
        freopen("BAI03.OUT", "w", stdout);
    }
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 0;
    sort(a, a + n, greater<long>());
    for (int i = 0; i < n; i++)
    {
        if (i + 1 <= a[i])
        {
            res = max(res, i + 1);
        }
    }
    cout << res;
}