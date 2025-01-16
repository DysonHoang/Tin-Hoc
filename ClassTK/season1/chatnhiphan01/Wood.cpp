#include "iostream"
#include "algorithm"
#define ll long long
using namespace std;
int n, m;
ll a[1000005], h = 0, maxtrh = 0;
ll gotwood(ll m)
{
    ll wood = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m)
        {
            wood += a[i] - m;
        }
    }
    return wood;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (maxtrh < a[i])
        {
            maxtrh = a[i];
        }
    }
    int l = 0, r = maxtrh, res = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll got = gotwood(mid);
        if (got >= m)
        {
            res = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << res;
}