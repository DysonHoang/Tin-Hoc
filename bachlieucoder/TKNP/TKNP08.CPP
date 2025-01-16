// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[10000005];

ll getWood(int x, int n)
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            sum += (a[i] - x);
        }
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll n, m;
    cin >> n >> m;

    ll max1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max1)
            max1 = a[i];
    }

    ll left = 0, right = max1;
    ll result = 0;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        if (getWood(mid, n) >= m)
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << result;
}
