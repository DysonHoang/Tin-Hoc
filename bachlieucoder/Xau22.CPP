#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;

ll n, k;
ll a[200005];

bool check(double mid)
{
    vector<double> T(n + 1, 0);
    double minT = 0;
    for (int i = 1; i <= n; i++)
    {
        T[i] = T[i - 1] + (a[i - 1] - mid);
        if (i >= k)
        {
            minT = min(minT, T[i - k]);
            if (T[i] - minT >= 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    double left = 0, right = 1e9, res = 0;
    while (right - left > 1e-6)
    {
        double mid = (left + right) / 2;
        if (check(mid))
        {
            res = mid;
            left = mid;
        }
        else
        {
            right = mid;
        }
    }

    cout << fixed << setprecision(3) << res << endl;
    return 0;
}
