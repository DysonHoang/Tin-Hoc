// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    if (fopen("BAI4.INP", "r"))
    {
        freopen("BAI4.INP", "r", stdin);
        freopen("BAI4.OUT", "w", stdout);
    }
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int ans = -1;
    for (int l = 1; l <= n; ++l)
    {
        long long s = 0;
        for (int i = 0; i < l; ++i)
        {
            s += a[i];
        }

        bool check = s <= k;
        for (int i = l; i < n; ++i)
        {
            s += a[i] - a[i - l];
            if (s > k)
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            ans = l;
        }
        else
        {
            break;
        }
    }

    cout << ans;
}