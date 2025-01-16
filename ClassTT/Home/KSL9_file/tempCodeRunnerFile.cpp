#include <bits/stdc++.h>
#define Mx 1532023
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll m, n;
    cin >> m >> n;

    ll s = 0;

    for (ll i = 1; i <= m; ++i)
    {
        for (ll j = 1; j <= n; ++j)
        {
            if ((i + j) % 2 == 0)
            {
                s += (i - 1) * n + j;
            }
        }

        cout << s % Mx;
    }

}