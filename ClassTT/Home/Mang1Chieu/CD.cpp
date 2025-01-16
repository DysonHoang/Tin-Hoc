#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a[100000], z, x;
int32_t main()
{
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        if (x >= a[i])
        {
            z++;
            x -= a[i];
        }
        else
        {
            cout << z;
            break;
        }
}