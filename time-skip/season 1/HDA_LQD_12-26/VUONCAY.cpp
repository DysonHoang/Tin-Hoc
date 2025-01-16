// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll m, n;
vector<vector<ll>> garden;

bool check(ll x1, ll y1, ll x2, ll y2)
{
    return garden[x1][y1] != garden[x2][y2];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m >> n;
    garden.resize(m, vector<ll>(n));

    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> garden[i][j];
        }
    }

    ll length = 0;

    length += 2 * (m + n);

    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (i > 0 && check(i, j, i - 1, j))
            {
                length++;
            }
            if (j > 0 && check(i, j, i, j - 1))
            {
                length++;
            }
        }
    }
    cout << length;
}