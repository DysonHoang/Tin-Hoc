// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int demuocnhanh(ll n)
{
    int count = 0;
    for (ll i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            count++;
            if (i != n / i)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;
    ll count[n + 2] = {0};
    for (int i = 1; i <= n; i++)
        count[i] = demuocnhanh(i);
    ll dem = 0;
    for (int i = 1; i <= n; i++)
        if (count[i] <= k)
            dem++;
    cout << dem;
}
