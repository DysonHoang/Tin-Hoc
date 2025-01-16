// Good wine must be aged for a long time...
// Hoang Duc Anh
#include <bits/stdc++.h>
#define Mx 10000000
#define ll long long
using namespace std;
int max1 = INT_MIN;
int min1 = INT_MAX;
ll a[100005];
bool bs(ll left, ll right, ll x)
{

    while (left <= right)
    {
        ll mid = (left + right) / 2;
        if (a[mid] == x)
            return 1;
        else if (a[mid] > x)
        {
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);
    ll n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (bs(1, n, k))
        cout << "Y\n";
    else
        cout << "N\n";
}
    