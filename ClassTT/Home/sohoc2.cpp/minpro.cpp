#include <bits/stdc++.h>
#define int long long
using namespace std;
int t, a, b, x, y, n;
void solve()
{
    cin >> a >> b >> x >> y >> n;
    int amin = max(x, a - n);
    int bmin = max(y, b - n);
    if (amin < bmin)
    {
        int a1 = amin;
        n = n - (a - amin);
        int b1 = max(b - n, bmin);
        cout << a1 * b1;
    }
    else
    {
        int b1 = bmin;
        n = n - (b - bmin);
        int a1 = max(a - n, amin);
        cout << a1 * b1;
    }
    cout << endl;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}