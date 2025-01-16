// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("DOIHINH.INP", "r"))
    {
        freopen("DOIHINH.INP", "r", stdin);
        freopen("DOIHINH.OUT", "w", stdout);
    }
    int n;
    cin >> n;

    vector<int> a(251, 0);

    for (int i = 0; i < n; ++i)
    {
        ll x;
        cin >> x;
        a[x]++;
    }

    ll count = 0;
    ll best_height = 0;

    for (int i = 1; i <= 250; i++)
    {
        if ((a[i] > count) || (a[i] == count && i > best_height))
        {
            count = a[i];
            best_height = i;
        }
    }

    cout << best_height << " " << count;
    return 0;
}
