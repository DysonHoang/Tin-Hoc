// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    long n, k;
    cin >> k >> n;
    int d[50005], a[50005];
    ll s = 0, res = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        s += a[i];
        long t = ((s % k) + k) % k;
        res += d[t + k];
        d[t + k]++;
    }
    cout << res;
}