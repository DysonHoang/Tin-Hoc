// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("BAI01.INP", "r"))
    {
        freopen("BAI01.INP", "r", stdin);
        freopen("BAI01.OUT", "w", stdout);
    }
    int n;
    cin >> n;
    long ans = (n - 1) * n / 2;
    cout << ans;
}