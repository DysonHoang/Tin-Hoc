// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    if (fopen("CAU2B.INP", "r"))
    {
        freopen("CAU2B.INP", "r", stdin);
        freopen("CAU2B.OUT", "w", stdout);
    }
    long n;
    cin >> n;
    ll s = n * (n + 1) / 2;
    long k = n / 5;
    ll s5 = 5 * k * (k + 1) / 2;
    long m = (n - 3) / 5;
    ll s3 = (m + 1) * 3 + 5 * m * (m + 1) / 2;
    ll res = s - s5 - s3;
    cout << res;
}
