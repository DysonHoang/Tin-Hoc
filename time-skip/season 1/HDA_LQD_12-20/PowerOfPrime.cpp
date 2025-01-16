// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
ll n, k, m, dem;
ll maxx, minn, vtr, ans, l, r;
ll t;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        dem = 0;
        for (int i = k; i <= n; i += k)
        {
            r = i;
            while (r % k == 0)
            {
                dem++;
                r /= k;
            }
        }
        cout << dem << "\n";
    }
}