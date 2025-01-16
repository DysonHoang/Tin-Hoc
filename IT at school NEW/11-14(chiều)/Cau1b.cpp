// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    if (fopen("CAU1B.INP", "r"))
    {
        freopen("CAU1B.INP", "r", stdin);
        freopen("CAU1B.OUT", "w", stdout);
    }
    long n, k;
    cin >> n >> k;

    long long s = 0;
    long dem = 0;

    for (long i = 1; i <= k; i++)
    {
        if (i % 2 == 1)
        {
            dem++;
            s += dem;
        }
        else
        {
            s += (n - dem + 1);
        }
    }

    cout << s;
    return 0;
}
